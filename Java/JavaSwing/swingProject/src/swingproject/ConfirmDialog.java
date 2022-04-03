
package swingproject;

import javax.swing.*;

public class ConfirmDialog {
    public static void main(String[] args) {
        
      int choice =  JOptionPane.showConfirmDialog(null, "Do you want to guit this program ? " ,"Title", JOptionPane.YES_NO_CANCEL_OPTION);
      
      if(choice == JOptionPane.YES_OPTION) {
          System.exit(0);
      }
      else{
          System.out.println("You have more option");
      }
          
    }
    
}
