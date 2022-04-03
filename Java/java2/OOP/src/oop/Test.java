
package oop;


public class Test {
    public static void main(String[] args) {
        
        Teacher teacher1 = new Teacher("Akhi","female", 0746765);//creat object 
        teacher1.displayInformation();
        
        
        Teacher teacher2 = new Teacher("Choity","female", 0746765);//creat object
        teacher2.displayInformation();
        
        Teacher teacher3 = new Teacher();
        teacher3.displayInformation();
        
    }
    
}
