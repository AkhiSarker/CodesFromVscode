
package swingproject;


import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;

public class Task1 implements ActionListener {

    JTextField tf1, tf2;
    JButton jb;

    public Task1() {
        JFrame f = new JFrame();
        f.setSize(300, 300);

        tf1 = new JTextField();
        tf1.setBounds(60, 50, 150, 20);

        tf2 = new JTextField();
        tf2.setBounds(60, 110, 150, 20);
        tf2.setEnabled(false);

        jb = new JButton("Even or Odd!");
        jb.setBounds(60, 80, 150, 20);
        jb.addActionListener(this);

        f.add(tf1);
        f.add(tf2);
        f.add(jb);

        f.setLayout(null);
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    @Override
    public void actionPerformed(ActionEvent x) {
        String str = tf1.getText();

        int n = Integer.parseInt(str);

        if (n % 2 == 0) {
            tf2.setText("Even Numnber");
        } else {
            tf2.setText("Odd Number");
        }

    }

    public static void main(String[] args) {
        new Task1();
    }

}