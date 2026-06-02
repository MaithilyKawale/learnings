/*Check if two numbers are equal*/

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter num1: ");
    scanf("%d", &num1);
    
    printf("Enter num2: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("num2 is smaller");
    }
    else if (num2 > num1) {
        printf("num1 is smaller");
    }
    else{
        printf("Two of them is equal");
    }

    return 0;
}