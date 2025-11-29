/*accept the temperature in degree celsius of water amd check whether it is boiling or not*/

#include <stdio.h>

int main(){
    float temp;
    printf("Enter temperature:");
    scanf("%f",&temp);

    if(temp>=100){
        printf("water is boiling");
    }
    else{
        printf("water is not boiling");
    }
}