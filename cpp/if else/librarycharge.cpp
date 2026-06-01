/*accept the number of days from the user and calculate the charge for library according to following
till 5 days       2rs
6 to 10 days        3rs
11 to 15 days  4rs
after 15days  5rs*/

#include <iostream>
using namespace std;

int main() {
    int days;
    float charge = 0.0;

    cout << "Enter number of days the book is borrowed: ";
    cin >> days;

    if (days <= 5) {
        charge = days * 2;
    } 
    else if (days <= 10) {
        charge = (5 * 2) + (days - 5) * 3;
    } 
    else if (days <= 15) {
        charge = (5 * 2) + (5 * 3) + (days - 10) * 4;
    } 
    else {
        charge = (5 * 2) + (5 * 3) + (5 * 4) + (days - 15) * 5;
    }

    cout << "Total Library Charge: Rs " << charge << endl;

    return 0;
}