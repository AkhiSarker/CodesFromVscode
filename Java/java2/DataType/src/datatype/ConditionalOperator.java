/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datatype;

import java.util.*;

public class ConditionalOperator {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int num1,num2,large,small;
        System.out.print("Enter two number : ");
        num1 = input.nextInt();
        num2 = input.nextInt();
        
        large = (num1>num2)? num1:num2 ;
        System.out.println("Large number = "+large);
        
        small = (num1<num2)? num1:num2 ;
        System.out.println("Small number = "+small);
    }
    
}
