package File;

import java.io.FileNotFoundException;
import java.util.Formatter;
import java.util.Scanner;

public class FileDemo2 {

    public static void main(String[] args) {
        
        String name,id;
        try {
            Formatter formatter = new Formatter("F:/Java/java2/OOP/Person/Student.text");
            
            Scanner input = new Scanner(System.in);
            System.out.print("How many students : ");
            int num  = input.nextInt();
            
            for (int i = 1; i <= num; i++) {
                System.out.print("Enter student id and name : ");
                id = input.next();
                name = input.next();
                formatter.format("%s %s\r\n",id,name );
            }
            
           
            formatter.close();
            
        }catch (FileNotFoundException e) {
            System.out.println(e);
        }

    }
}
