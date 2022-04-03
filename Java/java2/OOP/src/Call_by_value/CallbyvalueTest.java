
package Call_by_value;


public class CallbyvalueTest {
    public static void main(String[] args) {
        
        CallByValue ob = new CallByValue();
        int x =10;
        System.out.println("X before call : "+x);
        
        ob.change(x);
        System.out.println("X after call : "+x);
    }
    
}
