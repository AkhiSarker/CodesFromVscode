/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datatype;

import java.util.*;

public class PrimeNumber2 {
    public static void main(String[] args) {
        int m,n ,count=0,totalprime=0;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter initial numbor : ");
        m = input.nextInt();
        
        System.out.print("Enter ending number : ");
        n = input.nextInt();
        
        for (int i = m; i < n; i++) {
            for (int j = 2; j < i-1; j++) {
                if (i%j==0) {
                    count++;
                    break;
                }
                
            }
            if(count==0){
                System.out.println(i);
                totalprime++;
            }
           count=0;
        }
        System.out.println("Total prime number = "+totalprime);
    }
    
}
