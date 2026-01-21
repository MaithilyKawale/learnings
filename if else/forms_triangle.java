/*#Check if three sides form a triangle*/

import java.util.Scanner;

class forms_triangle{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter first side:");
        int side1=sc.nextInt();
        System.out.println("Enter second side:");
        int side2=sc.nextInt();
        System.out.println("Enter third side:");
        int side3=sc.nextInt();

        if((side1+side2>side3) && (side2+side3>side1) && (side1+side3>side2)){
            System.out.println("The sides form a triangle");
        }
        else{
            System.out.println("The sides do not form a triangle");
        }
    }
}