/*Calculate the cube of all numbers from 1 to a given number*/

#include <stdio.h>

int main(){
    int n,i;
    printf("Enter any number:");
    scanf("%d",&n);

    for(i=1; i<=n;i++){
        printf("Cube of %d is %d\n", i, i * i * i);
    }
}