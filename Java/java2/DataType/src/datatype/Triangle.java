/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datatype;

import java.util.Scanner;

public class Triangle {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner (System.in);
        double base,height,area;
        
        System.out.print("Enter the number base : ");
        base = input.nextDouble();
        
        System.out.print("Enter the number height : ");
        height = input.nextDouble();
        
        area = 0.5*base*height;
        
        System.out.println("Area of triangle : "+area);
    }
    
}
