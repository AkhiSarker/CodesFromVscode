package swingpro;

import javax.swing.*;

public final class FrameIcon extends JFrame {
    
    private ImageIcon icon;
    
    FrameIcon(){
        initComponents();
    }
    public void initComponents(){
        icon = new ImageIcon(getClass().getResource("images.png"));
        this.setIconImage(icon.getImage());
    }
    
    public static void main(String[] args) {
        FrameIcon frame = new FrameIcon();

        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        frame.setResizable(false);
        
        frame.setBounds(400, 100, 500, 400);
        frame.setTitle("Frame title");
    }
    
}
