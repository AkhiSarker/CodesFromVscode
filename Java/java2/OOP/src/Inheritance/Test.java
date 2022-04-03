
package Inheritance;


public class Test {
    public static void main(String[] args) {
        
        Teacher t1 = new Teacher();
        
        t1.name = "partoh ";
        t1.age = 27;
        t1.qualification = "MSc";
        
        t1.displayInformation2();
        
        Teacher t2 = new Teacher();
        
        t2.name = "akhi ";
        t2.age = 20;
        t2.qualification = "BSc";
        
        t2.displayInformation2();
    }
    
}
