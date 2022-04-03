
package FinalKeyword;

public class University {
    final String UNIVARSITY_NAMR = "NEUB";
    final int free ;//blank final variable
    static final int TOTAL_MEMBER ;//static blank final variable
    
    University(){
        free = 583936;
    }
    
    static{
        TOTAL_MEMBER = 752;
    }
    
    void display(){
        System.out.println("University name : "+UNIVARSITY_NAMR);
        System.out.println("Free : "+free);
        System.out.println("Member : "+TOTAL_MEMBER);
    }
}
