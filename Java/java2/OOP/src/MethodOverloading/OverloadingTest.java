
package MethodOverloading;


public class OverloadingTest {
    
    public static void main(String[] args) {
        Overload ob = new Overload();
        ob.add();
        ob.add(4,5);
        ob.add(2.4,4.5);
        ob.add(4,5,6);
        
    }
}
