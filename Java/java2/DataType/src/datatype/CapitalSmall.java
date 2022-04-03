/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datatype;

import java.util.*;

public class CapitalSmall {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        char ch;
        System.out.print("Enter any letter : ");
        ch = input.next().charAt(0); 
        
        if(ch>='A' && ch<='Z')//A-Z
        {
            System.out.println("Capital Latter");
        }
        else if(ch>='a' && ch<='z')//a-z
        {
            System.out.println("Small Latter");
        }
        else{
            System.out.println("NOT a Latter");
        }
    }
    
}
