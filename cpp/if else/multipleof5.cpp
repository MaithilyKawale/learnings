/*write a program to display "Hello" if a number entered by user is a multiple of five otherwise print "Bye"*/

#include <iostream>
using namespace std;

int main() {
    int num;

    cout<<"Enter num: ";
    cin>>num;

    if (num%5==0 && num>0) {
        cout<<"Hello";
    }

    else{
        cout<<"Bye";
    }

    return 0;
}