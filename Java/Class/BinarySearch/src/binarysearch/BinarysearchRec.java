
package binarysearch;

import java.util.*;

public class BinarysearchRec {
    int Bin_search(int arr[], int left, int right, int x) {
        if (right >= left) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == x) {
                return mid;
            }
            if (arr[mid] > x) {
                return Bin_search(arr, left, mid - 1, x);
            } else {
                return Bin_search(arr, mid + 1, right, x);
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        BinSearchRec ob = new BinSearchRec();
        int[] arr = new int[100];
        int len = arr.length;
        int x, n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements you want to store: ");
        n = sc.nextInt();
        
        
        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.print("Enter The number you want to search: ");
        x = sc.nextInt();
        
        int result = ob.Bin_search(arr, 0, len - 1, x);

        if (result == -1) {
            System.out.println("The element is not in the array");
        } else {
            System.out.println("The element is at index " + result);
        }
    }
}
