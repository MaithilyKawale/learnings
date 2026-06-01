/*write a cpp program to check whether a number is positive or negative*/

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter any number:";
    cin>>num;
    
    if(num>0){
        cout<<"It is positive number.";
    }
    
    else if (num<0){
        cout<<"It is negative number.";
    }
    else{
        cout<<"It is zero";
    }
    
}