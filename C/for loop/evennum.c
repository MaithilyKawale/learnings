/* program to print all the even numbers within the given range.*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter any number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        if(i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}