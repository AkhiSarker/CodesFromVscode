
package StaticVariable;


public class Student {
    static int count = 0;
    
    Student(){
        count++;
    }
    
    void totalStudent(){
        System.out.println("Total stubent = "+count);
    }
    
}
