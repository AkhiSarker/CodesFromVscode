/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datatype;

import java.util.Scanner;

public class AssignmentDemo {
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int x ,y; //x=3,y=2
        
        System.out.print("Enter First number : ");
        x=input.nextInt();
        System.out.print("Enter Second number : ");
        y=input.nextInt();
                
        x+=y; //x=x+y=5
        System.out.println("x = "+x);
        
        x-=y; //x=x-y=3
        System.out.println("x = "+x);
        
        x*=y; //x=x*y=6
        System.out.println("x = "+x);
        
        x/=y; //x=x/y=3
        System.out.println("x = "+x);
        
        x%=y; //x=x%y=1
        System.out.println("x = "+x);
    }
}
