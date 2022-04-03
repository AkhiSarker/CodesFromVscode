
package VariableLengthArguments;


public class AddDemo {
    
    void add(int ... num){
        int sum = 0;
        for (int i : num) {
            
            sum  = sum + i;
        }
        System.out.println(sum);
    }
    
}
