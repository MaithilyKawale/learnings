/*write a program to accept percentage from the user and display the grade according to the following criteria
>90  A
>80  <=90 B
>=60 <=80 C
below 60*/

#include <iostream>
using namespace std;

int main() {
    float percentage;

    cout << "Enter your percentage: ";
    cin >> percentage;

    if (percentage > 90) {
        cout << "Grade: A" << endl;
    } 
    else if (percentage > 80 && percentage <= 90) {
        cout << "Grade: B" << endl;
    } 
    else if (percentage >= 60 && percentage <= 80) {
        cout << "Grade: C" << endl;
    } 
    else {
        cout << "Grade: Below C" << endl;
    }

    return 0;
}