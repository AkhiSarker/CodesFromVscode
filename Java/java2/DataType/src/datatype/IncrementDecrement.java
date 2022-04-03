/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datatype;

public class IncrementDecrement {
    public static void main(String[] args) {
        
        int  x = 25, y;
        
        y = x++; //post increment x=25
        System.out.println("y = "+y);
        y = x; //x=26
        System.out.println("y = "+y);
        
        y = ++x; //pre increment x=27
        System.out.println("y = "+y);
        y = x; //x=27
        System.out.println("y = "+y);
        
        y = --x; //pre decrements x=26
        System.out.println("y = "+y);
        y = x; //x=26
        System.out.println("y = "+y);
        
        y = x--; //post decrements x=26
        System.out.println("y = "+y);
        y = x; //x=25
        System.out.println("y = "+y);  
        
    }
}
