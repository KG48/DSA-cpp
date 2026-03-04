#include<bits/stdc++.h>
using namespace std;
int reverse(int x) {

    long long rev = 0;
    int sign = x < 0 ? -1 : 1;
    x = abs(x);

    while(x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    rev *= sign;

    if(rev < INT_MIN || rev > INT_MAX) {
        return 0;
    }

    return rev;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x = -123;

    cout << reverse(x);

    
    return 0;
}