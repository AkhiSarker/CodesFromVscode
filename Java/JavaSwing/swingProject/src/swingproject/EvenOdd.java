package swingproject;

import javax.swing.*;
import java.awt.event.*;

public class EvenOdd implements ActionListener {

    JTextField tf1, tf2;
    JButton b;

    public EvenOdd() {
        JFrame f = new JFrame();
        f.setTitle("Even & odd");
        f.setBounds(500, 200, 400, 300);

        tf1 = new JTextField();
        tf1.setBounds(80, 50, 150, 20);

        tf2 = new JTextField();
        tf2.setBounds(80, 100, 150, 20);
        tf2.setEnabled(false);

        b = new JButton("Click");
        b.setBounds(80, 80, 150, 20);
        b.addActionListener(this);

        f.add(tf1);
        f.add(tf2);
        f.add(b);

        f.setLayout(null);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    }

    @Override
    public void actionPerformed(ActionEvent x) {
        String str = tf1.getText();

        int num = Integer.parseInt(str);

        if (num % 2 == 0) {
            tf2.setText("Even");
        } else {
            tf2.setText("Odd");
        }

    }

    public static void main(String[] args) {
        EvenOdd  EvenOdd =  new EvenOdd();
    }

}
