/*wite a program to accept a number from 1 to 12 and display the name of month and days in that month like 1 for january and number of days 31 and so on*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter num from 1-12:");
    scanf("%d",&num);
    
    if(num==1){
        printf("It is January and has 31 days");
    }
    
    else if(num==2){
        printf("It is February and has 28 days(29 days in leap year)");
    }
    
    else if(num==3){
        printf("It is March and has 31 days");
    }
    
    else if(num==4){
        printf("It is April and has 30 days");
    }
    
    else if(num==5){
        printf("It is May and has 31 days");
    }
    
    else if(num==6){
        printf("It is June and has 30 days");
    }
    
    else if(num==7){
        printf("It is July and has 31 days");
    }
    
    else if(num==8){
        printf("It is August and has 31 days");
    }
    
    else if(num==9){
        printf("It is September and has 30 days");
    }
    
    else if(num==10){
        printf("It is October and has 31 days");
    }
    
    else if(num==11){
        printf("It is November and has 30 days");
    }
    
    else if(num==12){
        printf("It is december and has 31 days");
    }
    
    else{
        printf("invalid number");
    }
}