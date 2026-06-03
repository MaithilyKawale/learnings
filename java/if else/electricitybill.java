/*#write a program to calculate the electricity bill(accept number of unit from user) according to the following criteria
#first 100unit no charge
#next 100 unit rs 5 per unit
#next 200 unit rs 10 per unit*/

import java.util.Scanner;
class electricity{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number of units consumed:");
        int units=sc.nextInt();

        double bill=0;

        if(units<=100){
            bill=0;
        }
        else if(units>100 && units<=200){
            bill=(units-100)*5;
        }
        else if(units>200 && units<=400){
            bill=100*5+(units-200)*10;
        }
        else{
            bill=100*5+200*10+(units-400)*15;
        }

        System.out.println("Your electricity bill is: Rs."+bill);
    }
}



