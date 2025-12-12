/*write a program to display "Hello" if a number entered by user is a multiple of five otherwise print "Bye"*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    if (num%5==0 && num>0) {
        printf("Hello");
    }

    else{
        printf("Bye");
    }

    return 0;
}