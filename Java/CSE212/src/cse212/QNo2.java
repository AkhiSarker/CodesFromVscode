package cse212;

import java.util.Scanner;

public class QNo2 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number : ");

        int count = 0;
        int n = input.nextInt();

        for (int i = 1; i <= n; i++) {
            if (i % 5 == 0) {

                count++;
            }
        }
        System.out.println("Total numbers are divisible by 5 : " + count);
    }

}
