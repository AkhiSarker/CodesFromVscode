/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package chapter.pkg8;

abstract class A {

    abstract void callme();


    void callmetoo() {
        System.out.println("This is a concrete method.");
    }
}

class B extends A {

    void callme() {
        System.out.println("B's implementation of callme.");
    }
}

public class AbstractDemo {

    public static void main(String args[]) {
        B b = new B();
        b.callme();
        b.callmetoo();
    }

}
