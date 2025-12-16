/*write a program to accept percentage and display the category according to the following criteria
>0 and<40     failed
>=40 and <65          fair
>=65  and  <75       good
>=75  and <=100 excellent*/

#include <stdio.h>

int main() {
    int percent;
    printf("Enter your percentage: ");
    scanf("%d",&percent);
    
    if(percent>=0 && percent<40){
        printf("You are failed");
    }
    
    else if(percent>=40 && percent<65){
        printf("Fair");
    }
    
    else if(percent>=65 && percent<75){
        printf("Good");
    }
    
    else if (percent>=75 && percent<=100){
        printf("Excellent");
    }
    
    else{
        printf("invalid input");
    }
}