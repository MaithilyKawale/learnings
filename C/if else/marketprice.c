/*according the marked price from the user and calculate the net amount as(market price-discount) to pay according to following criteria
>10000 20%
>7000 and <=10000      15%
<=7000      10%*/

#include <stdio.h>
int main() {
    float marketPrice;
    float discount;
    float netAmount;

    printf("Enter the market price: ");
    scanf("%f", &marketPrice);

    if (marketPrice > 10000) {
        discount = marketPrice * 0.20;
    }
    else if (marketPrice > 7000 && marketPrice <= 10000) {
        discount = marketPrice * 0.15;
    }
    else {
        discount = marketPrice * 0.10;
    }

    netAmount = marketPrice - discount;

    printf("Net amount to pay is: %.2f Rs\n", netAmount);

    return 0;
}