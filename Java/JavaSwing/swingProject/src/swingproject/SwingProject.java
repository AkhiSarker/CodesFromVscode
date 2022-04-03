
package swingproject;
import javax.swing.JFrame;

public class SwingProject {
    public static void main(String[] args) {
       JFrame obf = new JFrame ("SwingSampl");
       
       obf.setBounds(200,100,800,500);
       obf.setVisible(true);
       obf.setResizable(false);
       obf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
       
    }
    
}
