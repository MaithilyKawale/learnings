import java.util.Scanner;
class centuryyear{
    public static void main (string args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a year:");
        int year=sc.nextInt();

        if(year%4==0 && year%100!=0 ){
            System.out.println(year+" is a century year");
        }
        else{
            System.out.println(year+" is not a century year");
        }
    }
}