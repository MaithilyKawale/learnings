/*write a python program to check whether a number entered is  divisible by 2 and 3 both*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter num:" << endl;

    cin >> num;

    if (num % 2 == 0 && num % 3 == 0)
    {
        cout << "Number is divisible by both 2 and 3." << endl;
    }
    else
    {
        cout << "Number is not divisible by both 2 and 3." << endl;
    }
    return 0;
}