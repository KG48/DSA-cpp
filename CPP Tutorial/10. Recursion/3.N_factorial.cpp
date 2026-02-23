#include <bits/stdc++.h>
using namespace std;

// N factorial with recursion


int factorial(int n) {

    if(n == 0) {
        return 1; 
    }

    return n * factorial(n-1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cout << "Enter the Number :- " << flush;
    cin >> n;

    cout << factorial(n);
    
    return 0;
}