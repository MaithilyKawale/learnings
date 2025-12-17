/*wite a program to accept a number from 1 to 7 and display the name of the day like 1 for sunday,2 for monday and so on.*/

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter num from 1-7:";
    cin>>num;
    
    if(num==1){
        cout<<"It is Sunday";
    }
    
    else if(num==2){
        cout<<"It is Monday";
    }
    
    else if(num==3){
        cout<<"It is Tuesday";
    }
    
    else if(num==4){
        cout<<"It is Wednesday";
    }
    
    else if(num==5){
        cout<<"It is Thrusday";
    }
    
    else if(num==6){
        cout<<"It is Friday";
    }
    
    else if(num==7){
        cout<<"It is Saturday";
    }
    
    else{
        cout<<"invalid number";
    }
}
