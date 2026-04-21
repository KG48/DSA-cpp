#include <bits/stdc++.h>
using namespace std;

string EvenOdd(int num) {

    return (num & 1 ? "odd" : "even");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout << EvenOdd(5);
    
    return 0;
}