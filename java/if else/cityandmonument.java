#accept any city from the user and display monument of that city
#delhi red fort
#agra taj mahal
#jaipur jal mahal

import java.util.Scanner;

 class cityandmonument{
    public static void main (String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the city name:");
        String city=sc.nextLine();

        if(city.equalsIgnoreCase("delhi")){
            System.out.println("The monument of delhi is Red Fort");
        }
        else if(city.equalsIgnoreCase("agra")){
            System.out.println("The monument of agra is Taj Mahal");
        }
        else if(city.equalsIgnoreCase("jaipur")){
            System.out.println("The monument of jaipur is Jal Mahal");
        }
        else{
            System.out.println("Monument not found for the given city");
        }
    }