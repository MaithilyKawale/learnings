/*write a program to check whether an year is leap or not.*/

#include <iostream>
using namespace std;

int main()
{

    int year;
    cout << "Enter Year:";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << "It is leap year." << endl;
    }
    else
    {
        cout << "It is not leap year." << endl;
    }
    return 0;
}