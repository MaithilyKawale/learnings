/* program to calculate the sum of all the odd numbers within the given range.*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) { 
            printf("odd numbers are %d\n", i);
            sum = sum + i;
        }
    }

    printf("Sum of odd numbers up to %d = %d", n, sum);

    return 0;
}