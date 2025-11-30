/*wite a program to accept a number from 1 to 7 and display the name of the day like 1 for sunday,2 for monday and so on.*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter num from 1-7:");
    scanf("%d",&num);
    
    if(num==1){
        printf("It is Sunday");
    }
    
    else if(num==2){
        printf("It is Monday");
    }
    
    else if(num==3){
        printf("It is Tuesday");
    }
    
    else if(num==4){
        printf("It is Wednesday");
    }
    
    else if(num==5){
        printf("It is Thrusday");
    }
    
    else if(num==6){
        printf("It is Friday");
    }
    
    else if(num==7){
        printf("It is Saturday");
    }
    
    else{
        printf("invalid number");
    }
}