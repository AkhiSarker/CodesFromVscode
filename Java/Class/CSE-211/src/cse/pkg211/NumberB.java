/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cse.pkg211;

import java.util.*;

class demo {

    int x;

    void demo(int a) {

        Scanner ob;
        ob = new Scanner(System.in);

        int y = ob.nextInt();
        x = a + y;
    }

    void sum(int z, int x) {
        x = z + x;
        System.out.println(x);
    }
}

public class NumberB {

    public static void main(String args) {
        demo ob = new demo();
        ob.sum(15, 10);

    }

}
