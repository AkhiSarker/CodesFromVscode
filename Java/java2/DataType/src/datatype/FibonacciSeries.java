/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datatype;

import java.util.*;

public class FibonacciSeries {
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        System.out.print("How many number : ");
        int n = input.nextInt();
        
        int first = 0,second = 1,fibo ;
       
        System.out.print( first+" "+second);
        
        for (int i = 3; i <=n; i++) {
            
            fibo =first + second ;
            System.out.print(" "+fibo);
            first = second;
            second = fibo;
        }
        System.out.print("\n");
    }
    
}
