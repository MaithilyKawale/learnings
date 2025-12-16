/*accept the following from the user and calculate the percentage of class attended
total number of working days
total number of days for absent
after calculating percentage show that if the percentage is less than 75, than student will not be able to sit in exam*/

#include <stdio.h>

int main() {
    int wd,ad;
    float attended,percentage;
    
    printf("Enter Working days number:");
    scanf("%d",&wd);
    
    printf("Enter absent days number:");
    scanf("%d",&ad);
    
    attended=wd-ad;
    percentage=(attended/wd)*100;
    
    if(percentage<=75){
        printf("student will not be able to sit in exam.");
    }
    
    else{
        printf("student will be able to sit in exam.");
    }

}