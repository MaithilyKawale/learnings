/*write a python program to check whether a number is positive or negative*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    
    if(num>0){
        printf("It is positive number.");
    }
    
    else if (num<0){
        printf("It is negative number.");
    }
    else{
        printf("It is zero");
    }
    
}