/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datatype;

import java.util.*;

public class Series {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n,sum=0;
        System.out.print("Enter tha last number : ");
        n = input.nextInt();
        
        for (int i = 1; i <= n; i = i+2) {
            System.out.print(i+"*"+i+" ");
            sum = sum + i*i;
        }
        System.out.println();
        System.out.println("Sum = "+sum);
    }
    
}
