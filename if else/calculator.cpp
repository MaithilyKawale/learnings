#include <iostream>
using namespace std;

int main() {
    float num1, num2, result;
    char ope;

    cout<<"Enter any number1: ";
    cin>>num1;

    cout<<"Enter any number2: ";
    cin>>num2;

    cout<<"Enter operator (+, -, *, /): ";
    cin>>ope; 

    if (ope == '+') {
        result = num1 + num2;
    }
    else if (ope == '-') {
        result = num1 - num2;
    }
    else if (ope == '*') {
        result = num1 * num2;
    }
    else if (ope == '/') {
        result = num2 != 0 ? num1 / num2 : 0;
    }
    else {
        cout<<"Invalid operator";
    }

    cout<<"Result: "<<result;

}