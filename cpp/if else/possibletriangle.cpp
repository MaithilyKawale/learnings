/*accept three sides of triangle and check whether the triangle is possible or not
triangle is possible only when sum of any two sides is greater than 3rd side*/

#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;

    cout << "Enter length of first side: ";
    cin >> side1;

    cout << "Enter length of second side: ";
    cin >> side2;

    cout << "Enter length of third side: ";
    cin >> side3;

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        cout << "Triangle is possible." << endl;
    } else {
        cout << "Triangle is not possible." << endl;
    }

    return 0;
}