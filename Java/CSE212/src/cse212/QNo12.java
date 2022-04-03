package cse212;

import java.util.Scanner;

public class QNo12 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int[][] arr = new int[5][5];
        int total[] = new int[5];
        
        float per;

        for (int i = 0; i < 2; i++) {
            System.out.println("Student " + (i + 1) + " :-");
            total[i] = 0;
            for (int j = 0; j < 5; j++) {
                System.out.print("Mark of Course " + (j + 1) + " : ");
                arr[i][j] = scan.nextInt();
                total[i] = total[i] + arr[i][j];
            }
            System.out.println();
        }


        for (int i = 0; i < 2; i++) {
            System.out.println("Total mark of student " + (i + 1) + ": " + total[i]);

            per = ((total[i] / (100 * 5)) * 100);
            System.out.println("Percent: " + per);

            System.out.println("Grade of student " + (i + 1) + ": ");

            if (per >= 80) {

                System.out.println("A+");

            } else if (per >= 70 && per <= 79) {

                System.out.println("A");

            } else if (per >= 60 && per <= 69) {

                System.out.println("B");

            } else if (per >= 50 && per <= 59) {

                System.out.println("C");

            } else {

                System.out.println("F");

            }

        }
    }
}
