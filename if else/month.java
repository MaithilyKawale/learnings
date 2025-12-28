/*#wite a program to accept a number from 1 to 12 and display the name of month and days in that month like 1 for january and number of days 31 and so on*/

import java.util.Scanner;

class month{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number between 1 to 12:");
        int month=sc.nextInt();

        if(month==1){
            System.out.println("January has 31 days");
        }
        else if(month==2){
            System.out.println("February has 28 or 29 days");
        }
        else if(month==3){
            System.out.println("March has 31 days");
        }
        else if(month==4){
            System.out.println("April has 30 days");
        }
        else if(month==5){
            System.out.println("May has 31 days");
        }
        else if(month==6){
            System.out.println("June has 30 days");
        }
        else if(month==7){
            System.out.println("July has 31 days");
        }
        else if(month==8){
            System.out.println("August has 31 days");
        }
        else if(month==9){
            System.out.println("September has 30 days");
        }
        else if(month==10){
            System.out.println("October has 31 days");
        }
        else if(month==11){
            System.out.println("November has 30 days");
        }
        else if(month==12){
            System.out.println("December has 31 days");
        }
        else{
            System.out.println("Invalid input! Please enter a number between 1 to 12.");
        }
    }
}
