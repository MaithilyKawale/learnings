/*#accept three sides of a triangle and check whether it is an equilateral,isosceles or scalene triangle
#an equilateral triangle is a triangle in which all three sides are equal
#a scalene triangle is a triangle that has three unequal sides
#an isosceles triangle is a triangle with at least two equal sides*/

import java.util.Scanner;

class Triangle {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the three sides of the triangle:");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        if (a == b && b == c) {
            System.out.println("The triangle is equilateral");
        } 
        else if (a == b || b == c || c == a) {
            System.out.println("The triangle is isosceles");
        } 
        else {
            System.out.println("The triangle is scalene");
        }
    }
}

