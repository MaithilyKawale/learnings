/*Find the factorial of a given number*/

#include <iostream>
using namespace std;

int main() {
    int n, i;
    long fact=1;

    cout<<"Enter any number: ";
    cin>>n;

    for(i = 1; i <= n; i++) {
        
        fact=fact*i;
        
    }
        cout<<fact<<endl;
    
    return 0;
}