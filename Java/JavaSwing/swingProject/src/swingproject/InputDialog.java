
package swingproject;

import javax.swing.*;

public class InputDialog {
    public static void main(String[] args) {
        
      String name  = JOptionPane.showInputDialog("Enter your mane : ");
      
      JOptionPane.showMessageDialog(null, name + " Welcome to swing");
                
    }
}
