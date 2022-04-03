
package swingproject;

//import javax.swing.ImageIcon;
import javax.swing.*;

public class MassageDialog2 {
     public static void main(String[] args) {
         
         ImageIcon img = new ImageIcon("book.png");
                       
       JOptionPane.showMessageDialog(null, "Wrong password","This is title",-1, img);
    }
}
