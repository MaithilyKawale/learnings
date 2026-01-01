/*#write a program to display the last digit of a num*/

import java.util.Scanner;

class LastDigit {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int num = sc.nextInt();

        int lastDigit = (num % 10);
        System.out.println("The last digit of " + num + " is: " + lastDigit);
    }
}



