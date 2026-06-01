/*Write a program to accept a number from a user and calculate
the sum of all numbers from 1 to a given number
For example, if the user entered 10, the output should be 55 (1+2+3+4+5+6+7+8+9+10)*/

#include <iostream>
using namespace std;

int main() {
    int n, i, sum = 0;

    cout<<"Enter a number: ";
    cin>>n;

    for(i = 1; i <= n; i++) {
        sum = sum + i;   
    }

    cout<<"Sum of numbers "<< sum;

    return 0;
}
