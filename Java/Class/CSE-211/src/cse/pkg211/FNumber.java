/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cse.pkg211;

public class FNumber {
    public static void main(String[] args) {
        byte b, a = 5;
        double i = 267.142;
        b = (byte) i;
        System.out.println(b > i & --a > i);
        System.out.println(a);
    }
    
}
