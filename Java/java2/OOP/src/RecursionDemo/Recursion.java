
package RecursionDemo;


public class Recursion {
    
    int fact(int n){
        
        if(n==1){
            return 1;
        }
        else
            return n*fact(n-1);
    }
    
     public static void main(String[] args) {
       Recursion ob = new Recursion();
       
        int result = ob.fact(5);
        System.out.println("Fcatorial of 5 = " +result);
        
        result = ob.fact(4);
        System.out.println("Fcatorial of 4 = " +result);
        
        result = ob.fact(3);
        System.out.println("Fcatorial of 3 = " +result);
        
    }
    
}
