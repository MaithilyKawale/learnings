/*#accept the number of days from the user and calculate the charge for library according to following
#till 5 days       2rs
#6 to 10 days        3rs
#11 to 15 days  4rs
#after 15days  5rs*/

import java.util.Scanner;

class librarycharge{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number of days the book is borrowed:");
        int days=sc.nextInt();

        int charge=0;

        if(days<=5){
            charge=days*2;
        }
        else if(days>5 && days<=10){
            charge=5*2+(days-5)*3;
        }
        else if(days>10 && days<=15){
            charge=5*2+5*3+(days-10)*4;
        }
        else{
            charge=5*2+5*3+5*4+(days-15)*5;
        }

        System.out.println("Total library charge is: Rs."+charge);
    }
}

