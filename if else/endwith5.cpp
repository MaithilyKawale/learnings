/*Check if a number ends with digit 5*/

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 10 == 5 || num % 10 == -5) {
        cout << "The number ends with digit 5." << endl;
    } else {
        cout << "The number does not end with digit 5." << endl;
    }

    return 0;
}