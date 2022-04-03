
package File;

import java.io.File;


public class FileDemo1 {
    public static void main(String[] args) {
        File dir = new File("Person");
        dir.mkdir();
        String path = dir.getAbsolutePath();
        
        File file1 = new File(path+"/Student.text");
        File file2 = new File(path+"/teacher.text");
        
        try{
            file1.createNewFile();
            file2.createNewFile();
            System.out.println("Files are Created");
            
        }catch(Exception e){
            System.out.println(e);
        }
    }
    
}
