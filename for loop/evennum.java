/* program to print all the even numbers within the given range.*/

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int n,i;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter any number:");
        n = sc.nextInt();
        
        for(i = 1; i <= n; i++) {

        if(i % 2 == 0) {
            System.out.println(i);
        }
    }
    }
}