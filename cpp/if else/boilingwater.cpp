/*accept the temperature in degree celsius of water amd check whether it is boiling or not*/

#include <iostream>
using namespace std;

int main()
{
    float temp;
    cout << "Enter temperature:";
    cin >> temp;
    if (temp >= 100)
    {
        cout << "Water is boiled." << endl;
    }
    else
    {
        cout << "Water is yet to boil" << endl;
    }
    return 0;
}
