/*#write a python program to check whether a number is positive or negative*/

import java.util.Scanner;

class PositiveOrNegative {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int num = sc.nextInt();

        if (num >= 0) {
            System.out.println(num + " is a positive number");
        } 
        else {
            System.out.println(num + " is a negative number");
        }
    }
}

