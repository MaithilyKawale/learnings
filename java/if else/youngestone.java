/*#accept the age of four people and display the oldest and youngest one*/

import java.util.Scanner;

class YoungestOne {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter age of first person:");
        int age1 = sc.nextInt();
        System.out.println("Enter age of second person:");
        int age2 = sc.nextInt();
        System.out.println("Enter age of third person:");
        int age3 = sc.nextInt();
        System.out.println("Enter age of fourth person:");
        int age4 = sc.nextInt();

        // Finding the oldest
        int oldest = age1;
        if (age2 > oldest) {
            oldest = age2;
        }
        if (age3 > oldest) {
            oldest = age3;
        }
        if (age4 > oldest) {
            oldest = age4;
        }

        // Finding the youngest
        int youngest = age1;
        if (age2 < youngest) {
            youngest = age2;
        }
        if (age3 < youngest) {
            youngest = age3;
        }
        if (age4 < youngest) {
            youngest = age4;
        }

        System.out.println("The oldest person is: " + oldest + " years old");
        System.out.println("The youngest person is: " + youngest + " years old");
    }
}
