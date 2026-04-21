#include <bits/stdc++.h>
using namespace std;

long long fibonacci(int n){

    long long t1 = 0;
    long long t2 = 1;
    long long  t3;

    for(int i = 0; i<n; i++) {
        cout << t1 << " ";
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }

    return t3;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the Series Size :- " << flush;
    cin >> n;

    cout << "Fibonacci Series :- ";
    cout << fibonacci(n);

    return 0;
}