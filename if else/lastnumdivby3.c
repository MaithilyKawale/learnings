/*write a program to check whether the last digit of a num is divisible by 3 or not*/

#include <stdio.h>

int main() {
    int num,lastnum;
    
    printf("Enter number:");
    scanf("%d",&num);
    lastnum=num%10;
    
    if(lastnum%3==0){
        printf("number is divisible by 3");
    }
    else{
        printf("number is not divisible by 3");
    }
}