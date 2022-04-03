/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datatype;

import java.util.*;

public class BitwiseOperator {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a=32, b=12, c;
        
        c = a&b;//and(&)
        System.out.println("a&b : "+c);
        c = a|b;//or(|)
        System.out.println("a|b : "+c);
        c = a^b;//exor(^)
        System.out.println("a^b : "+c);
        c = a>>3;//right shift(>>)(36/2=16,16/2=8,8/2=4)
        System.out.println("a>>3 : "+c);
        c = a<<3;//left shift(<<)(32*2=64,64*2=128,128*2=256)
        System.out.println("a<<3 : "+c);
        
        
    }
    
}
