/*write a C program to check whether a number entered is three digit number or not*/
#include <stdio.h>

int main(){
    int num;
    printf("Enter any num:");
    scanf("%d",&num);
    
    if(num>99 && num<=999 || num==000){
        printf("It is Three digit number.");
    }
    else if(num<-99 && num>=-999){
        printf("It is Three digit number.");
    }
    else{
        printf("It is not three digit number.");
    }
}
