/* program to calculate the sum of all the odd numbers within the given range.*/

#include <iostream>
using namespace std;

int main() {
    int n, i, sum = 0;

    cout<<"Enter any number: ";
    cin>>n;

    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) { 
            cout<<"odd numbers are "<<i<<endl;
            sum = sum + i;
        }
    }

    cout<<"Sum of odd numbers "<< sum;

    return 0;
}