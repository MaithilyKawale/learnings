/*Check if year is a century year*/

#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter any year:";
    cin>>year;
    
    if(year%100==0 && year>0){
        cout<<"It is century year.";
    }
    else{
        cout<<"It is not century year.";
    }
}