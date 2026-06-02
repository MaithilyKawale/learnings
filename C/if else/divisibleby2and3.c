/*write a c program to check whether a number entered is  divisible by 2 and 3 both*/

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    if(num%2==0 && num%3==0){
        printf("The number is divisible by 2 and 3 both");
    }
    else{
        printf("The number is not divisible by 2 and 3 both");
    }
}