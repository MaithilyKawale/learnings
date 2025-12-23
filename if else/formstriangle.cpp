/*Check if three sides form a triangle*/

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
        cout << "The sides form a triangle." << endl;
    } else {
        cout << "The sides do not form a triangle." << endl;
    }

    return 0;
}