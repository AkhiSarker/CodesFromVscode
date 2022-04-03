/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datatype;

import java.util.*;

public class Loop2 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int m, n, sum = 0;
        System.out.print("Enter initial number : ");
        m = input.nextInt();
        System.out.print("Enter final number : ");
        n = input.nextInt();
        
        for (int i = m; i <=n; i++) {
            sum = sum + i;
        }
        System.out.println("sum = "+sum);
    }
}
