
package Returning_value;


public class ReturningValueText {
    public static void main(String[] args) {
        ReturningValueDemo ob1 = new ReturningValueDemo();
        int result = ob1.square(5);
        System.out.println("square of 5 = " +result);
        
        ReturningValueDemo ob2 = new ReturningValueDemo();
        System.out.println("square of 6 = " + ob2.square(6));

        
    }
    
}
