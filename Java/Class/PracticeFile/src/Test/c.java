package Test;

class A {

    String name;
    int age;

    A() {
        System.out.println("Constructor ");
    }

    A(String n, int a) {
        name = n;
        age = a;

    }

    void display() {

        System.out.println("Name : " + name);
        System.out.println("Age : " + age);
//        System.out.println("\n");

    }
}

class B extends A {

    private int id;

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    @Override
    void display() {
        System.out.println("Name : " + name);
        System.out.println("Age : " + age);
        System.out.println("ID : " + id);
    }

}

public class c {

    public static void main(String[] args) {

        B b1 = new B();
        b1.name = "akhi";
        b1.age = 12;
        b1.setId(1);
        b1.display();
    }

}
