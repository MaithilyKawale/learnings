/*Print multiplication table of a given number*/

import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        int n,i;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter any number:");
        n = sc.nextInt();
        
        for(i = 1; i <= 10; i++) {
        System.out.println(n*i);
    }
    }
}