/*#accept the kilometer covered and calculate the bill acc to following rate
#first 10 km     11rs
#next 90km    10rs
#above that      9rs*/

import java.util.Scanner;

class kilometerandbill{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter kilometers covered:");
        int km=sc.nextInt();

        double bill=0;

        if(km<=10){
            bill=km*11;
        }
        else if(km>10 && km<=100){
            bill=10*11+(km-10)*10;
        }
        else{
            bill=10*11+90*10+(km-100)*9;
        }

        System.out.println("Your total bill is: Rs."+bill);
    }
}


