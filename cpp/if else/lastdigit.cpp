/*write a program to display the last digit of a num*/

#include <iostream>
using namespace std;

int main() {
    int num, lastDigit;

    cout << "Enter a number: ";
    cin >> num;

    lastDigit = num % 10;

    cout << "The last digit is: " << lastDigit << endl;

    return 0;
}