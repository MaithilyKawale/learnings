/*accept any city from the user and display monument of that city
delhi red fort
agra taj mahal
jaipur jal mahal*/


#include <iostream>
using namespace std; 

int main() {
    string city;
    cout<<"Enter name of city:";
    cin>>city;
    
    if(city=="Delhi" || city=="delhi"){
        cout<<"Red Fort";
    }
    
    else if(city=="Agra" || city=="agra"){
        cout<<"Taj Mahal";
    }
    
    else if(city=="Jaipur" || city=="jaipur"){
        cout<<"Jal Mahal";
    }
    
    else{
        cout<<"not known";
    }
}