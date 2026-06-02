/*Display Fibonacci series up to 10 terms*/

#include <stdio.h>

int main() {
    int i;
    int a = 0, b = 1, c;
    printf("%d %d ", a, b);

    for(i = 3; i <= 10; i++) {
        c = a + b;     
        printf("%d ", c);
        a = b;         
        b = c;
    }

    return 0;
}