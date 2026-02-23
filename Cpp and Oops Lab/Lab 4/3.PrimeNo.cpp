#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {

    if(num <= 1) {
        return false;
    }
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cout << "Enter the Number :-" << flush;
    cin >> num;

    if(isPrime(num)) {
        cout << num << " is prime number" << endl;
    } else {
        cout << num << " is not prime number" << endl;
    }
    
    return 0;
}