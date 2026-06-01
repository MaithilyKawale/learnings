/*write a cpp program to find the lowest number out of two number expected from user*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout<<"Enter num1: ";
    cin>>num1;
    
    cout<<"Enter num2: ";
    cin>>num2;

    if (num1 > num2) {
        cout<<"num2 is smaller";
    }
    else if (num2 > num1) {
        cout<<"num1 is smaller";
    }
    
    else{
        cout<<"Two of them is equal";
    }

    return 0;
}