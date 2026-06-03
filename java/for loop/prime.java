/*Print all prime numbers within a range*/

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int j, i, sum = 0;
        Scanner sc = new Scanner(System.in);

        for(i = 1; i <= 10; i++) {
            int isPrime = 1;    

            for(j = 2; j < i; j++) {
                if(i % j == 0) { 
                    isPrime = 0; 
                    break;
                }
            }

            if(isPrime) {
                System.out.println(i);
                sum = sum + i; 
            }
        }

        System.out.println("Sum of prime numbers: " + sum);
    }
}

