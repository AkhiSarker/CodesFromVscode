
package Call_By_Reference;


public class CallbyreferenceTest {
     public static void main(String[] args) {
        
        Callbyreference r1 = new Callbyreference();
        r1.name = "akhi";
        System.out.println("X before call : "+r1.name);
        
        r1.change(r1);
        System.out.println("X after call : "+r1.name);
    }
}
