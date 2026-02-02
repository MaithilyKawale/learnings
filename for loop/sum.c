/*Write a program to accept a number from a user and calculate
the sum of all numbers from 1 to a given number
For example, if the user entered 10, the output should be 55 (1+2+3+4+5+6+7+8+9+10)*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + i;   
    }

    printf("Sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
