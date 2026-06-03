/*Display Fibonacci series up to 10 terms*/

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        int i;
        int a = 0, b = 1, c;
        Scanner sc = new Scanner(System.in);
        System.out.println(a+"\n"+ b);

        for(i = 3; i <= 10; i++) {
        c = a + b;     
        System.out.println(c);
        a = b;         
        b = c;
    }
    }
}