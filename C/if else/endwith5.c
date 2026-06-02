/*Check if a number ends with digit 5*/

#include <stdio.h>

int main() {
    int num;
    
    printf("Enter number:");
    scanf("%d",&num);
    
    if(num%10==5){
        printf("number ends with 5");
    }
    else{
        printf("number does not ends with 5");
    }

}