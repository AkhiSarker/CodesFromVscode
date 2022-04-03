package spaceinvaders;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.GraphicsConfiguration;
import java.awt.Image;
import java.awt.Point;
import java.awt.Transparency;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.io.File;
import java.io.IOException;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Random;
import java.util.Vector;
import javax.imageio.ImageIO;
import javax.swing.JPanel;
import javax.swing.Timer;

public class GameWindow extends JPanel implements ActionListener, Serializable {

	private static final long serialVersionUID = 6037236323540109415L;
	private static transient GameWindow gameCanvas = null;
	private static final int NUMBER_ENEMIES = 36;
	private ResistanceShip player;
	private ArrayList<DarkVaderShip> enemies = new ArrayList<DarkVaderShip>();
	private ArrayList<ShipProjectile> enemyLaserCleanUpList = new ArrayList<ShipProjectile>();
	private ArrayList<ShipProjectile> playerLaserCleanUpList = new ArrayList<ShipProjectile>();
	private static HashSet<GameObject> gameObjects = new HashSet<GameObject>();
	private int score = 0;
	private static HashMap<String, Image> imageCache = new HashMap<String, Image>();
	private long lastFire;
	private int enemyCount = NUMBER_ENEMIES;
	private int liveCount = 3;
	private int levelCount = 1;
	private Timer leftPressed = new Timer(10, new LeftPressed());
	private Timer rightPressed = new Timer(10, new RightPressed());
	private Timer gameTimer = new Timer(20, this);
	private Timer enemyFireTimer = new Timer(1000, new MyFireListener());
	private Timer respawn = new Timer(2000, new redrawPlayer());

	static Vector<String> listVector = new Vector<String>();

	private GameWindow() {
		super();

		setBackground(Color.black);
		setDoubleBuffered(true);
		setFocusable(true);
		initializeShips();
		createPlayer();

		addKeyListener(keyListener);
		gameTimer.start();

		enemyFireTimer.start();
		this.setBackground(Color.BLACK);
	}

	public static GameWindow getGameCanvas(boolean whichCanvas) {
		if (gameCanvas == null && whichCanvas == false) {
			gameCanvas = new GameWindow();
		}

		if (gameCanvas == null && whichCanvas == true) {
			gameCanvas = new GameWindow();
		}
		return gameCanvas;
	}

	private void initializeShips() {
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 6; j++) {
				DarkVaderShip e = new DarkVaderShip("Resources/Enemy.png", new Point(100 + i * 55, (50) + j * 40),
						new Dimension(50, 50));
				enemies.add(e);
				gameObjects.add(e);
			}
		}
	}

	private void createPlayer() {
		player = new ResistanceShip("Resources/Ship.png", new Point(300, 500), new Dimension(60, 60));
		gameObjects.add(player);
	}

	@Override
	public void paintComponent(Graphics g) {
		super.paintComponent(g);
		g.setColor(Color.WHITE);
		g.drawString("Lives:  " + liveCount, 500, 30);
		g.drawString("Level: " + levelCount, 270, 30);
		g.drawString("Score:  " + score, 50, 30);

		Iterator<GameObject> itt = gameObjects.iterator();

		while (itt.hasNext()) {
			GameObject current = itt.next();
			if (!current.isActive())
				continue;
			current.draw(g);
		}
	}

	@Override
	public void actionPerformed(ActionEvent event) {
		int moveY = 0;

		for (int i = 0; i < enemies.size(); i++) {
			if (enemies.get(i).switchDirection()) {
				moveY = 12;
				break;
			} else
				moveY = 0;
		}

		Iterator<GameObject> itt = gameObjects.iterator();

		while (itt.hasNext()) {
			GameObject current = itt.next();

			if (current instanceof ResistanceShip)
				continue;
			current.move(0, moveY);
		}
		collision();
		cleanUp();
		repaint();
	}

	public DarkVaderShip[] getEnemies() {
		return (DarkVaderShip[]) enemies.toArray();
	}

	public static void addGameObject(GameObject obj) {
		gameObjects.add(obj);
	}

	public static void removeGameObject(GameObject obj) {
		if (gameObjects.contains(obj))
			gameObjects.remove(obj);
	}

	private void collision() {
		for (DarkVaderShip e : enemies) {

			Iterator<ShipProjectile> laserItt = ResistanceShip.laserList.iterator();
			while (laserItt.hasNext()) {
				ShipProjectile currentLaser = (ShipProjectile) laserItt.next();

				if (currentLaser.getRectangle().intersects(e.getRectangle()) && currentLaser.isActive()) {
					currentLaser.setActive(false);
					playerLaserCleanUpList.add(currentLaser);
					score += 10;
					e.setActive(false);
					enemyCount--;
				}
			}
			if (enemyCount == 0) {
				liveCount++;
				levelCount++;
				enemyCount = NUMBER_ENEMIES;
			}
		}

		Iterator<ShipProjectile> laserItt = DarkVaderShip.laserList.iterator();
		while (laserItt.hasNext()) {
			ShipProjectile currentLaser = (ShipProjectile) laserItt.next();

			if (player.isActive()) {
				if (currentLaser.getRectangle().intersects(player.getRectangle()) && currentLaser.isActive()) {
					currentLaser.setActive(false);
					enemyLaserCleanUpList.add(currentLaser);
					enemyFireTimer.stop();
					gameTimer.stop();
					respawn.start();
					player.setActive(false);

					if (liveCount >= 1) {
						liveCount--;
					}
				}
			}
		}
	}

	private void cleanUp() {
		ArrayList<DarkVaderShip> al = new ArrayList<DarkVaderShip>();
		for (DarkVaderShip e : enemies) {
			if (!e.isActive())
				al.add(e);
		}
		enemies.removeAll(al);
		ResistanceShip.laserList.removeAll(playerLaserCleanUpList);
		DarkVaderShip.laserList.removeAll(enemyLaserCleanUpList);
	}

	public static Image getImage(String location, GraphicsConfiguration gc) throws IOException {
		Image img = null;
		if (imageCache.containsKey(location))
			return imageCache.get(location);
		else {
			Image sourceImg;
			sourceImg = ImageIO.read(new File(location));
			img = gc.createCompatibleImage(sourceImg.getWidth(null), sourceImg.getHeight(null), Transparency.BITMASK);
			img.getGraphics().drawImage(sourceImg, 0, 0, null);
			imageCache.put(location, img);
		}
		return img;
	}

	public class MyFireListener implements ActionListener {

		@Override
		public void actionPerformed(ActionEvent arg0) {
			if (enemies.size() == 0)
				return;
			else {
				int randomNumber = new Random().nextInt(enemies.size());
				enemies.get(randomNumber).fire();
			}
		}
	}

	KeyListener keyListener = new KeyListener() {

		@Override
		public void keyPressed(KeyEvent e) {

			if (e.getKeyCode() == KeyEvent.VK_LEFT) {
				rightPressed.start();

				if (player.getPosition().x < 0) {
					rightPressed.stop();
				}
			}

			if (e.getKeyCode() == KeyEvent.VK_RIGHT) {
				leftPressed.start();

				if (player.getPosition().x > 550) {
					leftPressed.stop();
				}
			}
		}

		@Override
		public void keyReleased(KeyEvent e) {
			if (e.getKeyCode() == KeyEvent.VK_LEFT) {
				rightPressed.stop(); 
			}

			if (e.getKeyCode() == KeyEvent.VK_RIGHT) {
				leftPressed.stop();
			}

			if (e.getKeyCode() == KeyEvent.VK_SPACE) {
				int delay = 800;

				if (System.currentTimeMillis() - lastFire < delay) {
					return;
				}
				if (player.isActive()) {
					player.fire();
					lastFire = System.currentTimeMillis();
				}
			}
		}

		@Override
		public void keyTyped(KeyEvent e) {
		}
	};

	class RightPressed implements ActionListener {

		@Override
		public void actionPerformed(ActionEvent e) {
			if (player.isActive())
				player.move(player.getPosition().x - 5, 0);
		}

	}

	class LeftPressed implements ActionListener {

		@Override
		public void actionPerformed(ActionEvent e) {
			if (player.isActive())
				player.move(player.getPosition().x + 5, 0);
		}
	}

	class redrawPlayer implements ActionListener {
		@Override
		public void actionPerformed(ActionEvent arg0) {
			respawn.stop();

			if (liveCount != 0) {
				createPlayer();
				player.setActive(true);
				enemyFireTimer.start();
				gameTimer.start();
			}

		}
	}
}
