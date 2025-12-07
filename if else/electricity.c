/*write a program to calculate the electricity bill(accept number of unit from user) according to the following criteria
first 100unit no charge
next 100 unit rs 5 per unit
next 200 unit rs 10 per unit*/

#include <stdio.h>
int main() {
    int units;
    float bill = 0.0;

    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = 0.0;
    } else if (units <= 200) {
        bill = (units - 100) * 5.0;
    } else if (units <= 400) {
        bill = (100 * 5.0) + (units - 200) * 10.0;
    } else {
        bill = (100 * 5.0) + (200 * 10.0) + (units - 400) * 15.0;
    }

    printf("The total electricity bill is: Rs %.2f\n", bill);

    return 0;
}