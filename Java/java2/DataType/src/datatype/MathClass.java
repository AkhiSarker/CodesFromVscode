/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datatype;

public class MathClass {
    public static void main(String[] args) {
        int x = 2 , y = 3 ,z = -10;
        
        int max = Math.max(x, y);
        System.out.println("Maximum = "+max);
        
        int min = Math.min(x, y);
        System.out.println("Minimum = "+min);
        
        int absolute = Math.abs(z);
        System.out.println("Absoulte of z  = "+absolute);
        
        double power = Math.pow(x, y);
        System.out.println("x to the power y = "+power);
        
        int round = Math.round(8.4f);
        System.out.println("Round of 8.4 = "+round);
        
        double pi = Math.PI;
        System.out.println("PI = "+pi);
        
    }
    
}
