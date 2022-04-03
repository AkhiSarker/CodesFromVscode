
package Abstraction;


public class Test {
    public static void main(String[] args) {
        MobileUser mu; //refernece variable
        
        mu = new Pakhi();
        mu.sendMessage();
        
        mu = new Bonolota();
        mu.sendMessage();
    }
    
}
