/* write a program to check whether a number entered is three digit number or not*/

import java.util.Scanner;

class ThreeDigit {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);  
        System.out.println("Enter a number:");
        int num = sc.nextInt();               

        if ((num >= 100 && num <= 999) || (num <= -100 && num >= -999)) {
            System.out.println("The number is a three-digit number");
        } 
        else {
            System.out.println("The number is not a three-digit number");
        }
    }
}


