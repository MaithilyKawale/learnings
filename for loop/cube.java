/*Calculate the cube of all numbers from 1 to a given number*/

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int n,i;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter any number:");
        n = sc.nextInt();
        
        for(i=1; i<=n;i++){
        System.out.println(i * i * i);
    }
    }
}