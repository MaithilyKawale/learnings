/* #accept the following from the user and calculate the percentage of class attended
#total number of working days
#total number of days for absent
#after calculating percentage show that if the percentage is less than 75, than student will not be able to sit in exam*/

import java.util.Scanner;

class attendace{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter total number of working days:");
        int totaldays=sc.nextInt();

        System.out.println("Enter total number of absent days:");
        int absentdays=sc.nextInt();

        int presentdays=totaldays-absentdays;
        double percentage=(presentdays*100.0)/totaldays;

        System.out.println("Your attendance percentage is:"+percentage);

        if(percentage<75){
            System.out.println("You are not allowed to sit in exam");
        }
        else{
            System.out.println("You are allowed to sit in exam");
        }
    }
}

