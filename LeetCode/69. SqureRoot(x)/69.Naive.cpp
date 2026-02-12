#include <bits/stdc++.h>
using namespace std;

int sqrt(int x) {

    int ans = 0;
    for(int i =1; i<=x; i++) {
        if(i * i <= x) {
            ans = i;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout << sqrt(8);
    
    return 0;
}