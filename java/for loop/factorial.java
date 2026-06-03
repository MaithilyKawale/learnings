/*Find the factorial of a given number*/

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int n, i;
        long fact=1;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter any number:");
        n = sc.nextInt();
        
        for(i = 1; i <= n; i++) {
        fact=fact*i;
    }
        System.out.println("factorial is " + fact);
    }
}