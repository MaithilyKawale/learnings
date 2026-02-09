/*Print all prime numbers within a range*/

#include <iostream>
using namespace std;

int main() {
    int i, j, sum = 0; 
    

    for(i = 1; i <= 10; i++) {
        int isPrime = 1;    

        for(j = 2; j < i; j++) {
            if(i % j == 0) { 
                isPrime = 0; 
                break;
            }
        }

        if(isPrime) {
            cout<<i<<endl;
            sum = sum + i; 
        }
    }

    cout<<"Sum of prime numbers "<< sum;

    return 0;
}
