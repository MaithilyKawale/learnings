/*write a program to check whether the last digit of a num is divisible by 3 or not*/

#include <iostream>
using namespace std;
int main() {
    int num, lastDigit;

    cout << "Enter a number: ";
    cin >> num;

    lastDigit = num % 10;

    if (lastDigit % 3 == 0) {
        cout << "The last digit " << lastDigit << " is divisible by 3." << endl;
    } else {
        cout << "The last digit " << lastDigit << " is not divisible by 3." << endl;
    }

    return 0;
}