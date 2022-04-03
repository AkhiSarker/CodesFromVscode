package cse212;

import java.util.Scanner;

public class QNo1 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        float Fahrenheit, Celsius;

        System.out.print("Enter any number : ");
        Fahrenheit = input.nextFloat();

        Celsius = ((Fahrenheit - 32) * 5) / 9;
        System.out.println("Temperature in celsius is: " + Celsius);
    }

}
