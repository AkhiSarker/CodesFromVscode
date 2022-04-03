
package spaceinvaders;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.GraphicsConfiguration;
import java.awt.GraphicsEnvironment;
import java.awt.Image;
import java.awt.Point;
import java.io.IOException;
import java.io.Serializable;
import java.util.HashSet;

public class ResistanceShip extends GameObject implements SpaceShips, Serializable {
	private static final long serialVersionUID = 6037236323540109415L;

	public static HashSet<ShipProjectile> laserList = new HashSet<ShipProjectile>();
	
	private transient Image img;
	
	public ResistanceShip(String imageLocation, Point position, Dimension size) {
		super(imageLocation, position, size);
		GraphicsConfiguration gc = GraphicsEnvironment.getLocalGraphicsEnvironment().getDefaultScreenDevice().getDefaultConfiguration();

		try {
			img = GameWindow.getImage(imageLocation, gc);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	@Override
	public void draw(Graphics g) {
		Point position = getPosition();
		Dimension size = getSize();
		
		g.drawImage(img, position.x, position.y, size.width, size.height, null);
	}

	@Override
	public void move(int x, int y) {
		Point position = getPosition();
		Dimension size = getSize();
		position.x = x;
		getRectangle().setRect(position.x, position.y, size.width, size.height);
	}

	@Override
	public void fire() {
		Point pos = new Point(getPosition());
		pos.x = pos.x + getSize().width/2;
		pos.y = pos.y - 20;
		ShipProjectile l = new ShipProjectile(pos, Color.BLUE);
		l.setySpeed(5);
		
		GameWindow.addGameObject(l);
		laserList.add(l);
	}
}
