
package spaceinvaders;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.GraphicsConfiguration;
import java.awt.GraphicsEnvironment;
import java.awt.Image;
import java.awt.Point;
import java.io.Serializable;
import java.util.HashSet;
// Enemy Ship
public class DarkVaderShip extends GameObject implements SpaceShips, Serializable {
	private static final long serialVersionUID = 6037236323540109415L;

	private transient Image img;
	private int movement = 2;
	
	public static HashSet<ShipProjectile> laserList = new HashSet<ShipProjectile>();
	
	public DarkVaderShip(String imageLocation, Point position, Dimension size) {
		super(imageLocation, position, size);
		GraphicsConfiguration gc = GraphicsEnvironment.getLocalGraphicsEnvironment().getDefaultScreenDevice().getDefaultConfiguration();
		
		try {
			img = GameWindow.getImage(imageLocation, gc);
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	public boolean switchDirection() {
		if ((getPosition().x + getSize().width) > StarWars_FWFH.WIDTH || (getPosition().x <= 0)) {
			StarWars_FWFH.setDirection(StarWars_FWFH.getDirection() * -1);
			return true;
		}
		return false;
	}

	@Override
	public void move(int x, int y) {
		getPosition().x += (StarWars_FWFH.getDirection()) * movement;
		getPosition().y += y;
		getRectangle().setRect(getPosition().x, getPosition().y, getSize().width, getSize().height);
	}

	@Override
	public void fire() {
		Point pos = new Point(getPosition());
		pos.x = pos.x + getSize().width/2;
		
		ShipProjectile l = new ShipProjectile(pos, Color.RED);
		l.setPosition(new Point(pos.x, pos.y + 40));
		l.setySpeed(-5);
		
		GameWindow.addGameObject(l);
		laserList.add(l);
	}
	
	@Override
	public void draw(Graphics g) {
		Point position = getPosition();
		Dimension size = getSize();
		
		g.drawImage(img, position.x, position.y, size.width, size.height, null);		
	}
	
	public void increaseSpeed() {
		movement++;
	}
}
