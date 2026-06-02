/*accept the kilometer covered and calculate the bill acc to following rate
first 10 km     11rs
next 90km    10rs
above that      9rs*/

#include <stdio.h>
int main() {
    int kilometers;
    int bill;

    printf("Enter kilometers covered: ");
    scanf("%d", &kilometers);

    if (kilometers <= 10) {
        bill = kilometers * 11;
    }
    else if (kilometers > 10 && kilometers <= 100) {
        bill = (10 * 11) + ((kilometers - 10) * 10);
    }
    else {
        bill = (10 * 11) + (90 * 10) + ((kilometers - 100) * 9);
    }

    printf("Total bill is: %d Rs\n", bill);

    return 0;
}