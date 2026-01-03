/*#Check if two numbers are equal*/

import java.util.Scanner;

class equalnum{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter first number:");
        int num1=sc.nextInt();
        System.out.println("Enter second number:");
        int num2=sc.nextInt();

        if(num1==num2){
            System.out.println("Both numbers are equal");
        }
        else{
            System.out.println("Numbers are not equal");
        }
    }
}
