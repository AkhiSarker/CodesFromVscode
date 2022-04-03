package swingpro;

import javax.swing.*;

public class FrameDemo {

    public static void main(String[] args) {

        JFrame frame = new JFrame();

        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

//         frame.setSize(400,300);
//        frame.setLocale(200,500);

        frame.setResizable(false);
        
        frame.setBounds(400, 100, 400, 300);
        frame.setTitle("Frame title");

    }

}
