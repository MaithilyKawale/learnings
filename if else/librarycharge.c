/*accept the number of days from the user and calculate the charge for library according to following
till 5 days       2rs
6 to 10 days        3rs
11 to 15 days  4rs
after 15days  5rs*/

#include <stdio.h>
int main() {
    int days;
    int charge;

    printf("Enter number of days: ");
    scanf("%d", &days);

    if (days <= 5) {
        charge = days * 2;
    }
    else if (days >= 6 && days <= 10) {
        charge = days * 3;
    }
    else if (days >= 11 && days <= 15) {
        charge = days * 4;
    }
    else {
        charge = days * 5;
    }

    printf("Total library charge is: %d Rs\n", charge);

    return 0;
}