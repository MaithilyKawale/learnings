/*#write a program to accept the cost price of a bike and display the road tax to be paid according to the following criteria
#>100000  15% tax
#>50000 <=100000   10% tax
#<=50000     5%tax */

import java.util.Scanner;

class roadtax{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the cost price of the bike:");
        int costprice=sc.nextInt();

        double tax=0;

        if(costprice>100000){
            tax=costprice*0.15;
        }
        else if(costprice>50000 && costprice<=100000){
            tax=costprice*0.1;
        }
        else{
            tax=costprice*0.05;
        }

        System.out.println("The road tax to be paid is: Rs."+tax);
    }
}

