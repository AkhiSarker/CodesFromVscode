
package Methodoverriding;


public class Test {
    public static void main(String[] args) {
        
        Teacher t1= new Teacher ();
        
        t1.name = "akhi";
        t1.age = 17;
        t1.qualification = "jf";
        
        t1.displayInformation();
        
        Person p1= new Person ();
        
        p1.name = "akjdgfhkhi";
        p1.age = 1757;
       
        p1.displayInformation();
    }
    
}
