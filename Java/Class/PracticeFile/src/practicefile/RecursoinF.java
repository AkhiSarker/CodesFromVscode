/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practicefile;

import java.util.*;

public class RecursoinF {
    
    static int function_1(int n)
    {
        int result = 0;
        
        while(n>0)
        {
            result += (n%10);
        n = n/10;
        }
          return result;  
    }
    
    static int function_2(int n)
    {
        if(n<10)
            return n;
        
        else
            return n%10+function_2(n/10);
    }
    
     public static void main(String[] args) {
        
        Scanner input = new Scanner (System.in);
        int n, result;
        
        System.out.print("Enter the number : ");
        n = input.nextInt();
        
       result = function_1(n);
       System.out.println("Without recursion : "+result);
       
        
     }
          
}
