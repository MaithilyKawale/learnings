/*write a program to display the last digit of a num*/

#include <stdio.h>

int main() {
    int num, lastDigit;

    printf("Enter any number: ");
    scanf("%d", &num);

    lastDigit = num % 10;   // gives last digit

    printf("Last digit is: %d", lastDigit);

    return 0;
}
