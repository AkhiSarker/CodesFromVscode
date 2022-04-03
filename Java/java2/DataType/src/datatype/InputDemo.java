/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datatype;

import java.util.Scanner;

public class InputDemo {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
         
        System.out.print("Enter your nume : ");
        String nume = input.nextLine();
        System.out.println("Nume = "+nume);
        
        System.out.print("Enter any number : ");
        int number = input.nextInt();
        System.out.println("Number = "+number);
    }
            
}
