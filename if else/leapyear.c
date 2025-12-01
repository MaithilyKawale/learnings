/*write a program to check whether an year is leap or not.*/

#include <stdio.h>

int main(){
    int year;
    printf("Enter any year:");
    scanf("%d",&year);
    
    if(year%4==0){
        printf("It is leap year");
    }
    
    else{
        printf("It is not leap year");
    }
}