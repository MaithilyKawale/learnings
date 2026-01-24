/*#write a program to check whether the last digit of a num is divisible by 3 or not*/

import java.util.Scanner;

class LastNumDivisibleBy3 {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int num = sc.nextInt();

        int lastDigit = num % 10;

        if (lastDigit % 3 == 0) {
            System.out.println("The last digit " + lastDigit + " of " + num + " is divisible by 3");
        } 
        else {
            System.out.println("The last digit " + lastDigit + " of " + num + " is not divisible by 3");
        }
    }
}

