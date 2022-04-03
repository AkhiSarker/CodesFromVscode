package task;

abstract class A {

    A() {
        System.out.println("This constructor of abstract class");
    }

    abstract void a_method();

    void function() {
        System.out.println("This is a normal method of abstract class");
    }
}

class B extends A {

    void a_method() {
        System.out.println("This is abstract method");
    }
}

public class Task_1 {

    public static void main(String[] args) {
        // TODO code application logic here
        B b = new B();
        b.a_method();
        b.function();
    }

}
