/*write a program to accept percentage and display the category according to the following criteria
>0 and <40     failed
>=40 and <65          fair
>=65  and  <75       good
>=75 and <=100   excellent*/

#include <iostream>
using namespace std;

int main() {
    int percent;
    cout<<"Enter your percentage: ";
    cin>>percent;
    
    if(percent>=0 && percent<40){
        cout<<"You are failed";
    }
    
    else if(percent>=40 && percent<65){
        cout<<"Fair";
    }
    
    else if(percent>=65 && percent<75){
        cout<<"Good";
    }
    
    else if (percent>=75 && percent<=100){
        cout<<"Excellent";
    }
    
    else{
        cout<<"invalid input";
    }
}