/*Check if year is a century year*/

#include <stdio.h>

int main(){
    int year;
    printf("Enter any year:");
    scanf("%d",&year);
    
    if(year%100==0 && year>0){
        printf("It is century year.");
    }
    else{
        printf("It is not century year.");
    }
}