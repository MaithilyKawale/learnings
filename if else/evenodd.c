/*write a program to check whether a number entered by user is even or odd*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter any num:");
    scanf("%d",&num);
    
    if(num%2==0){
        printf("It is even number");
    }
    
    else{
        printf("It is odd number");
    }
}