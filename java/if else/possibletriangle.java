/*#accept three sides of triangle and check whether the triangle is possible or not
#triangle is possible only when sum of any two sides is greater than 3rd side*/

import java.util.Scanner;

class PossibleTriangle {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the three sides of the triangle:");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        if (a + b > c && b + c > a && c + a > b) {
            System.out.println("The triangle is possible");
        } 
        else {
            System.out.println("The triangle is not possible");
        }
    }
}

