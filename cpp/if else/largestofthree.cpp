#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout<<"Enter num1: ";
    cin>>num1;
    
    cout<<"Enter num2: ";
    cin>>num2;
    
    cout<<"Enter num3: ";
    cin>>num3;

    if (num1 > num2 && num1 > num3) {
        cout<<"num1 is greater";
    }
    else if (num2 > num1 && num2 > num3) {
        cout<<"num2 is greater";
    }
    else if(num3 > num1 && num3 > num2) {
        cout<<"num3 is greater";
    }
    
    else{
        cout<<"Two of them is equal";
    }

    return 0;
}