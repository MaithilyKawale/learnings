/* program to calculate the sum of all the odd numbers within the given range.*/

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int n, i, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter any number:");
        n = sc.nextInt();
        
        for(i = 1; i <= n; i++) {
        if(i % 2 != 0) { 
            System.out.println("odd numbers are " + i);
            sum = sum + i;
        }
    }

    System.out.print("Sum of odd numbers " +sum);
    }
}