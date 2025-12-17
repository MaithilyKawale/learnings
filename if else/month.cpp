/*wite a Cpp program to accept a number from 1 to 12 and display the name of month and days in that month like 1 for january and number of days 31 and so on*/

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter num from 1-12:";
    cin>>num;
    
    if(num==1){
        cout<<"It is January and has 31 days";
    }
    
    else if(num==2){
        cout<<"It is February and has 28 days(29 days in leap year)";
    }
    
    else if(num==3){
        cout<<"It is March and has 31 days";
    }
    
    else if(num==4){
        cout<<"It is April and has 30 days";
    }
    
    else if(num==5){
        cout<<"It is May and has 31 days";
    }
    
    else if(num==6){
        cout<<"It is June and has 30 days";
    }
    
    else if(num==7){
        cout<<"It is July and has 31 days";
    }
    
    else if(num==8){
        cout<<"It is August and has 31 days";
    }
    
    else if(num==9){
        cout<<"It is September and has 30 days";
    }
    
    else if(num==10){
        cout<<"It is October and has 31 days";
    }
    
    else if(num==11){
        cout<<"It is November and has 30 days";
    }
    
    else if(num==12){
        cout<<"It is december and has 31 days";
    }
    
    else{
        cout<<"invalid number";
    }
}