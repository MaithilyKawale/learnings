/*Print all prime numbers within a range*/

#include <stdio.h>

int main() {
    int i, j, sum = 0; 
    

    for(i = 1; i <= 10; i++) {
        int isPrime = 1;    

        for(j = 2; j < i; j++) {
            if(i % j == 0) { 
                isPrime = 0; 
                break;
            }
        }

        if(isPrime) {
            printf("%d ", i);
            sum = sum + i; 
        }
    }

    printf("\nSum of prime numbers: %d\n", sum);

    return 0;
}
