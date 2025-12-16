/*accept any city from the user and display monument of that city
delhi red fort
agra taj mahal
jaipur jal mahal*/

#include <stdio.h>
#include <string.h>
int main() {
    char city[50];

    printf("Enter the name of the city (delhi, agra, jaipur): ");
    scanf("%s", city);

    if (strcmp(city, "delhi") == 0) {
        printf("Monument: Red Fort\n");
    } else if (strcmp(city, "agra") == 0) {
        printf("Monument: Taj Mahal\n");
    } else if (strcmp(city, "jaipur") == 0) {
        printf("Monument: Jal Mahal\n");
    } else {
        printf("Monument not found for the given city.\n");
    }

    return 0;
}