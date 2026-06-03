/*#according the marked price from the user and calculate the net amount as(market price-discount) to pay according to following criteria
#>10000 20%
#>7000 and <=10000      15%
#<=7000      10%*/

import java.util.Scanner;

class marketprice{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the marked price:");
        int price=sc.nextInt();

        double netamount=0;

        if(price>10000){
            netamount=price-(price*0.2);
        }
        else if(price>7000 && price<=10000){
            netamount=price-(price*0.15);
        }
        else{
            netamount=price-(price*0.1);
        }

        System.out.println("The net amount to pay is: Rs."+netamount);
    }
}


