#include <iostream>
using namespace std;

int isPrime(int n) {

    if(n<=1) {
        return 0;
    }
    for(int i=2;i<=n/2;i++) {
        if(n % i == 0)
            return 0;
        
        
    }
    return 1;

}

int main() {

    int n=8;

    if(isPrime(n)) {
        cout<<n << " is prime number. ";
    }
    else {
        cout << n << " is not prime number. ";
    }

    return 0;
}