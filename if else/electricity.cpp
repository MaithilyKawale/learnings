/*write a program to calculate the electricity bill(accept number of unit from user) according to the following criteria
first 100unit no charge
next 100 unit rs 5 per unit
next 200 unit rs 10 per unit*/

#include <iostream>
using namespace std;

int main() {
    int units;
    float billAmount = 0.0;

    cout << "Enter number of units consumed: ";
    cin >> units;

    if (units <= 100) {
        billAmount = 0;
    } 
    else if (units <= 200) {
        billAmount = (units - 100) * 5;
    } 
    else if (units <= 400) {
        billAmount = (100 * 5) + (units - 200) * 10;
    } 
    else {
        billAmount = (100 * 5) + (200 * 10) + (units - 400) * 15; 
    }

    cout << "Total Electricity Bill: Rs " << billAmount << endl;

    return 0;
}