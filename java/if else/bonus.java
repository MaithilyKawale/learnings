/* #A company decided to give bonus to employee according to following criteria
#more than 10 years  10%
#>=6 and <=10   8%
#less than 6 years     5%
#ask user for their salary and years of service and print the net bonus amount*/

import java.util.Scanner;
class bonus{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your salary:");
        int Salaray=sc.nextInt();

        System.out.println("Enter your years of service:");
        int years=sc.nextInt();

        if(years>10){
            System.out.println("Your bonus is:"+(Salaray*0.1));
        }
        else if(years>=6 && years<=10){
            System.out.println("Your bonus is:"+(Salaray*0.08));
        }
        else{
            System.out.println("Your bonus is:"+(Salaray*0.05));
        }
    }
}






