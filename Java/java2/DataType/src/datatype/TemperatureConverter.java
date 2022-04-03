/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datatype;

import java.util.Scanner;

public class TemperatureConverter {
    public static void main(String[] args) {
        
        Scanner input = new Scanner (System.in);
        double cels,farn;
        
        System.out.print("Enter celsius : ");
        cels = input.nextDouble();
        
        farn = 1.8*cels+32; //Celsius to Fahrenheit
        System.out.println("farenheit : "+farn);
       
        System.out.print("Enter farenheit : ");
        farn = input.nextDouble();
        
        cels = 0.56*(farn-32); //Fahrenheit to Celsius
        System.out.println("celsius : "+cels);
          
        
    }
}

