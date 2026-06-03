/*#Check if a number ends with digit 5*/

import java.util.Scanner;

class endwith5{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int num=sc.nextInt();

        if(num%10==5){
            System.out.println(num+" ends with digit 5");
        }
        else{
            System.out.println(num+" does not ends with digit 5");
        }
    }
}

