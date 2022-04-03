/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datatype;

public class BreakContinue {
    public static void main(String[] args) {
        
        System.out.println("Break");
        for (int i = 0; i <=20; i++) {
            if(i==10){
                break;
            }
            System.out.println(i);
        }
        
        System.out.println("Continue");
        for (int i = 1; i <=30; i = i+3) {
            if(i==20){
                continue;
            }
            System.out.println(i);
        }
        
        System.out.println("Continue and Break");
        for (int i = 1; i <=30; i = i+2) {
            if(i==10){
                continue;
            }
            if(i>13){
                break;
            }
            System.out.println(i);
        }
        
    }
    
}
