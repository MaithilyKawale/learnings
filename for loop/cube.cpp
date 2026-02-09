/*Calculate the cube of all numbers from 1 to a given number*/

#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter any number:";
    cin>>n;

    for(i=1; i<=n;i++){
        cout<<"Cube of "<<i<< " is " <<i * i * i<<endl;
    }
}