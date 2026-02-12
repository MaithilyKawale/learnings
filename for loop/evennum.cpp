/* program to print all the even numbers within the given range.*/

#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout<<"Enter any number: ";
    cin>>n;

    for(i = 1; i <= n; i++) {

        if(i % 2 == 0) {
            cout<<i<<endl;
        }
    }

    return 0;
}