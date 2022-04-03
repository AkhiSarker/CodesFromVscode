
package swingproject;

import javax.swing.JFrame;
import javax.swing.JOptionPane;

public class jframe1 {

    public static void main(String[] args) {

        JFrame obj = new JFrame();
        obj.setBounds(10, 10, 700, 600);
        obj.setTitle("JFrame");
        obj.setResizable(true);
        obj.setVisible(true);
        obj.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        String number = JOptionPane.showInputDialog("Enter digit:");
        int num1 = Integer.parseInt(number);
        String ob = JOptionPane.showInputDialog("Enter String:");
        if ((num1 + ob.length()) % 2 == 0) {
            JOptionPane.showMessageDialog(null, "even");
        } else {

            JOptionPane.showMessageDialog(null, "Odd");
        }

    }
}