#include <bits/stdc++.h>
using namespace std;

int digit(int n ) {

    int revNum = 0;
    while(n > 0) {
    
    revNum = revNum * 10 + n % 10;  // 3
    n = n/10;    // 123  = 12

    
    }
    return revNum;
}




int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 123;

    cout << digit(n);
    

    return 0;
}