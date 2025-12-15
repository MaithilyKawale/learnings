/*accept three sides of triangle and check whether the triangle is possible or not
triangle is possible only when sum of any two sides is greater than 3rd side*/

#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter side1: ");
    scanf("%d", &side1);
    
    printf("Enter side2: ");
    scanf("%d", &side2);
    
    printf("Enter side3: ");
    scanf("%d", &side3);

    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        printf("Triangle is possible");
    }
    else {
        printf("Triangle is not possible");
    }

    return 0;
}