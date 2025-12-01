/*write a program to check whether a num is divisible by 7 or not*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    
    if(num%7==0){
       printf("Number is divisible by 7");
        
    }
    else{
        printf("Number is not divisible by 7");
    }
}