/* #write a program to accept percentage and display the category according to the following criteria
#<40     failed
#>=40 and <55          fair
#>=65  and  <65       good
#>=65   excellent*/

import java.util.Scanner;

class category{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your percentage:");
        int percent=sc.nextInt();

        if(percent<40){
            System.out.println("You have failed");
        }
        else if(percent>=40 && percent<55){
            System.out.println("Your category is fair");
        }
        else if(percent>=55 && percent<65){
            System.out.println("Your category is good");
        }
        else{
            System.out.println("Your category is excellent");
        }
    }
}

