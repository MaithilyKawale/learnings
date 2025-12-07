/*A company decided to give bonus to employee according to following criteria
more than 10 years  10%
>=6 and <=10   8%
less than 6 years     5%
ask user for their salary and years of service and print the net bonus amount*/

#include <stdio.h>

int main() {
    float salary, years, bonus;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("Enter years of service: ");
    scanf("%f", &years);

    if (years > 10) {
        bonus = salary * 0.10;   // 10%
    }
    else if (years >= 6 && years <= 10) {
        bonus = salary * 0.08;   // 8%
    }
    else {
        bonus = salary * 0.05;   // 5%
    }

    printf("Your net bonus amount is: %.2f", bonus);

    return 0;
}