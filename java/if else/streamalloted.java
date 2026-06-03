/*#accept marks of english,maths and science,social studies subject and display the stream alloted
#all subject more than 80 marks_  Science Stream
#english>80 and math,science above 50_    Commerce Stream
#english > 80 and social studies > 80 _ humanities*/

import java.util.Scanner;

class streamalloted{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter marks of English:");
        int english=sc.nextInt();
        System.out.println("Enter marks of Maths:");
        int maths=sc.nextInt();
        System.out.println("Enter marks of Science:");
        int science=sc.nextInt();
        System.out.println("Enter marks of Social Studies:");
        int socialstudies=sc.nextInt();

        if(english>80 && maths>80 && science>80 && socialstudies>80){
            System.out.println("Science Stream alloted");
        }
        else if(english>80 && maths>50 && science>50){
            System.out.println("Commerce Stream alloted");
        }
        else if(english>80 && socialstudies>80){
            System.out.println("Humanities Stream alloted");
        }
        else{
            System.out.println("No stream alloted");
        }
    }
}


