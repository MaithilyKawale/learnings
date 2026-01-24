/*write a python program to check whether a number entered is  divisible by 2 and 3 both*/

import java.util.Scanner;
class divisibleby2and3{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int num=sc.nextInt();

        if(num%2==0 && num%3==0){
            System.out.println(num+" is divisible by both 2 and 3");
        }
        else{
            System.out.println(num+" is not divisible by both 2 and 3");
        }
    }
}