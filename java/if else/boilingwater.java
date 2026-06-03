/*accept the temperature in degree celsius of water amd check whether it is boiling or not*/

import java.util.Scanner;

class BoilingWater {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the temperature in degree Celsius:");
        int temp = sc.nextInt();

        if (temp >= 100) {
            System.out.println("The water is boiling");
        } else {
            System.out.println("The water is not boiling");
        }
    }
}


