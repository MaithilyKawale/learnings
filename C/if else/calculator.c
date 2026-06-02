#include <stdio.h>

int main() {
    float num1, num2, result;
    char ope;

    printf("Enter any number1: ");
    scanf("%f", &num1);

    printf("Enter any number2: ");
    scanf("%f", &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &ope);

    if (ope == '+') {
        result = num1 + num2;
    }
    else if (ope == '-') {
        result = num1 - num2;
    }
    else if (ope == '*') {
        result = num1 * num2;
    }
    else if (ope == '/') {
        result = num2 != 0 ? num1 / num2 : 0;
    }
    else {
        printf("Invalid operator");
        return 0;
    }

    printf("Result = %.2f", result);

    return 0;
}
