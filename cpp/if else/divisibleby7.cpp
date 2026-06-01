/*write a program to check whether a num is divisible by 7 or not*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter num:" << endl;

    cin >> num;

    if (num % 7 == 0 )
    {
        cout << "Number is divisible by 7." << endl;
    }
    else
    {
        cout << "Number is not divisible by 7." << endl;
    }
    return 0;
}