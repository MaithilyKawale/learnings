/*Display Fibonacci series up to 10 terms*/

#include <iostream>
using namespace std;

int main() {
    int i;
    int a = 0, b = 1, c;
    cout<< a, b;

    for(i = 3; i <= 10; i++) {
        c = a + b;     
        cout<< c<<endl;
        a = b;         
        b = c;
    }

    return 0;
}