import java.util.Scanner;

class salarytax{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your salary:");
        int salary=sc.nextInt();

        if(salary>100000){
            double tax=salary*0.30;
            System.out.println("The tax to be paid is: "+tax);
        }
        else if(salary>50000 && salary<=100000){
            double tax=salary*0.20;
            System.out.println("The tax to be paid is: "+tax);
        }
        else{
            double tax=salary*0.10;
            System.out.println("The tax to be paid is: "+tax);
        }
    }
}