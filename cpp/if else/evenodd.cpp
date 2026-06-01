/*write a program to check whether a number entered by user is even or odd*/

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any num:";
    cin>>num;
    
    if(num%2==0){
        cout<<"It is even number";
    }
    
    else{
        cout<<"It is odd number";
    }
}