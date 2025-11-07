#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number >= 100 && number <= 999 ){
        cout << "It is 3 digit number." << endl;
    } 
    else {
        cout << "it is not 3 digit number." << endl;
    }
}