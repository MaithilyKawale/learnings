/*Write a program to accept a number from a user and calculate
the sum of all numbers from 1 to a given number
For example, if the user entered 10, the output should be 55 (1+2+3+4+5+6+7+8+9+10)*/

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int n, i, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter any number: ");
        n= sc.nextInt();
        
        for(i = 1; i <= n; i++) {
        sum = sum + i;   
    }

    System.out.print("Sum of numbers "+ sum);

    }
}