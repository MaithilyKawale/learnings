/*#write a program to accept percentage from the user and display the grade according to the following criteria
#>90  A
#>80  <=90 B
#>=60 <=80 C
#below 60*/

import java.util.Scanner;

class grade{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your percentage:");
        int percent=sc.nextInt();

        if(percent>90){
            System.out.println("Your grade is A");
        }
        else if(percent>80 && percent<=90){
            System.out.println("Your grade is B");
        }
        else if(percent>=60 && percent<=80){
            System.out.println("Your grade is C");
        }
        else{
            System.out.println("You have failed");
        }
    }
}

