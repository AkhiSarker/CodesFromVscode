package spaceinvaders;

import java.awt.Color;
import java.awt.Container;
import java.awt.Image;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.image.BufferStrategy;
import java.io.Serializable;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JList;
import javax.swing.JPanel;
import javax.swing.SwingUtilities;

public class StarWars_FWFH extends JFrame implements Serializable {
	private static final long serialVersionUID = 6037236323540109415L;
	public static final int WIDTH = 630;
	public static final int HEIGHT = 600;
	BufferStrategy strategy;
	Container c = getContentPane();
	static JList<String> userList;

	private static int direction = 1;

	private static final String TITLE = "Star Wars: Far Away from Home";

	public StarWars_FWFH() {
		super(TITLE);
		final JPanel startPanel = new JPanel();
		startPanel.setBackground(Color.BLACK);
		JButton startGame = new JButton("Start Game");
		JButton exitGame = new JButton("Exit Game");
		JButton icon = new JButton(new ImageIcon("Resources\\logo0.png"));
		icon.setBounds(400, 600, 100, 100);
		icon.setBackground(Color.BLACK);

		startPanel.add(icon);
		startPanel.add(startGame);
		startPanel.add(exitGame);
		this.add(startPanel);

		ImageIcon pic = new ImageIcon("Resources\\icon.png");
		Image img = pic.getImage();
		setVisible(true);
		setSize(WIDTH, HEIGHT);

		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setLocationRelativeTo(null);
		setResizable(false);
		setIgnoreRepaint(true);
		createBufferStrategy(2);

		startGame.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				c.removeAll();
				JFrame frame = StarWars_FWFH.this;
				c.add(GameWindow.getGameCanvas(false));
				GameWindow.getGameCanvas(false).grabFocus();
				frame.setContentPane(c);
				frame.repaint();
			}
		});

		exitGame.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				System.exit(0);
			}
		});
		strategy = getBufferStrategy();
		strategy.show();
		setIconImage(img);
	}

	public static void main(String[] args) {
		SwingUtilities.invokeLater(new Runnable() {

			@Override
			public void run() {
				new StarWars_FWFH();
			}
		});
	}

	public static int getDirection() {
		return direction;
	}

	public static void setDirection(int direction) {
		StarWars_FWFH.direction = direction;
	}
}
