#include <iostream>
using namespace std;

int isPrime(int n){

    if(n<=1) {
        return 0;
    }
    for(int i=2;i<=n/2;i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {

    int N = 1000;
    for(int i =0; i<=N; i++) {
        if(isPrime(i)){
            cout << i <<endl;;
        }
    }
    return 0;
}