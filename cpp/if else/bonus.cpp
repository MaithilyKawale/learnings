/*A company decided to give bonus to employee according to following criteria
more than 10 years  10%
>=6 and <=10   8%
less than 6 years     5%
ask user for their salary and years of service and print the net bonus amount*/

#include <iostream>
using namespace std;

int main() {
    int salary, year;
    cout << "Enter salary: " << endl;
    cout << "Enter years of service: " << endl;
    cin >> salary >> year;

    if(year > 10) {
        cout << "your net bonus amount is: " << salary * 10/100 << endl;
    }
    else if (year >= 6 && year <= 10) {
        cout << "your net bonus amount is: " << salary * 8/100 << endl;
    }
    else if(year < 6) {
        cout << "your net bonus amount is: " << salary * 5/100 << endl;
    }
    else {
        cout << "Invalid input" << endl;
    }

    return 0;
}