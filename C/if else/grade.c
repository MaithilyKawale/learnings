/*write a program to accept percentage from the user and display the grade according to the following criteria
>90  A
>80  <=90 B
>=60 <=80 C
below 60*/

#include <stdio.h>

int main(){
    int percentage;
    printf("Enter your percentage:");
    scanf("%d",&percentage);
    
    if(percentage>90 && percentage<=100){
        printf("You got A grade");
        
    }
    else if(percentage>80 && percentage<=90){
        printf("You got B grade");
    }
    
    else if(percentage>60 && percentage<=80){
        printf("You got C grade");
    }
    
    else if(percentage<=60 && percentage>=0){
        printf("Fail");
    }
}