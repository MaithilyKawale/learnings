/*accept the kilometer covered and calculate the bill acc to following rate
first 10 km     11rs
next 90km    10rs
above that      9rs*/

#include <iostream>

using namespace std;
int main() {
    int km;
    float bill = 0.0;

    cout << "Enter kilometers covered: ";
    cin >> km;

    if (km <= 10) {
        bill = km * 11;
    } 
    else if (km <= 100) {
        bill = (10 * 11) + (km - 10) * 10;
    } 
    else {
        bill = (10 * 11) + (90 * 10) + (km - 100) * 9;
    }

    cout << "Total Bill: Rs " << bill << endl;

    return 0;
}