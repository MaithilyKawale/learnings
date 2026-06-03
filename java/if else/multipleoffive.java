/*#write a program to display "Hello" if a number entered by user is a multiple of five otherwise print "Bye"*/

import java.util.Scanner;

class multipleoffive {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number:");
        int num = sc.nextInt();

        if (num % 5 == 0) {
            System.out.println("Hello");
        } 
        else {
            System.out.println("Bye");
        }
    }
}
