package QNo4;

import java.util.Scanner;

class Demo1 {

    Demo1(String s) {
        System.out.println(" " + s);
    }

    Demo1(int a, int b) {
        int sum = a + b;
        System.out.println("Sum(From D1): " + sum);
    }

    Demo1(float x, float y, float z) {
        float into = x * y * z;
        System.out.println("Multiplication(From D1): " + into);
    }
}

class Demo2 {

    Demo2(String s) {
        System.out.println(" " + s);
    }

    Demo2(int a, int b) {
        int sum = a + b;
        System.out.println("Sum(From D@): " + sum);
    }

    Demo2(float x, float y, float z) {
        float into = x * y * z;
        System.out.println("Multiplication(From D2): " + into);
    }
}

class Demo3 {

    Demo3(String s) {
        System.out.println(" " + s);
    }

    Demo3(int a, int b) {
        int sum = a + b;
        System.out.println("Sum(From D@): " + sum);
    }

    Demo3(float x, float y, float z) {
        float into = x * y * z;
        System.out.println("Multiplication(From D2): " + into);
    }
}

public class Implementer {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String s1 = scan.nextLine();
        Demo1 D11 = new Demo1(s1);
        int a1, b1;
        System.out.print("Enter two integer: ");
        a1 = scan.nextInt();
        b1 = scan.nextInt();
        Demo1 D12 = new Demo1(a1, b1);
        System.out.print("Enter three float: ");
        float x1 = scan.nextFloat();
        float y1 = scan.nextFloat();
        float z1 = scan.nextFloat();
        Demo1 D13 = new Demo1(x1, y1, z1);

        System.out.println();

        System.out.print("Enter a string: ");
        String s2 = scan.nextLine();
        Demo2 D21 = new Demo2(s2);
        int a2, b2;
        System.out.print("Enter two integer: ");
        a2 = scan.nextInt();
        b2 = scan.nextInt();
        Demo2 D22 = new Demo2(a2, b2);
        System.out.print("Enter three float: ");
        float x2 = scan.nextFloat();
        float y2 = scan.nextFloat();
        float z2 = scan.nextFloat();
        Demo2 D23 = new Demo2(x2, y2, z2);

        System.out.println();

        System.out.print("Enter a string: ");
        String s3 = scan.nextLine();
        Demo3 D31 = new Demo3(s3);
        System.out.print("Enter two int: ");
        int a3, b3;
        a3 = scan.nextInt();
        b3 = scan.nextInt();
        Demo3 D32 = new Demo3(a3, b3);
        float p3, q3, r3;
        System.out.print("Enter three float valur: ");
        p3 = scan.nextFloat();
        q3 = scan.nextFloat();
        r3 = scan.nextFloat();
        Demo3 D33 = new Demo3(p3, q3, r3);

        System.out.println();
    }

}
