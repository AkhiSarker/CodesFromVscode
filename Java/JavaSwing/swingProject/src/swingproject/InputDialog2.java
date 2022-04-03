
package swingproject;

import javax.swing.*;

public class InputDialog2 {
    public static void main(String[] args) {
        
      String f_name  = JOptionPane.showInputDialog(null,"Enter your first mane : " , "This is tittle",1);
      String l_name  = JOptionPane.showInputDialog("Enter your last mane : " );
     
      String name = f_name + " " + l_name ;
      
      JOptionPane.showMessageDialog(null, "Your full mane is : " + name);
                
    }
    
}
