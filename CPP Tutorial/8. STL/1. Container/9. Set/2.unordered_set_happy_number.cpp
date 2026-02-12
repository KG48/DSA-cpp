#include <bits/stdc++.h>
using namespace std;

bool isHappy(int n) {

    unordered_set<int> seen;

    while(n != 1){
        if(seen.count(n)) {
            return false;
        }
        seen.insert(n);
        int sum = 0;
        while(n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n = n / 10;
        }
        n = sum;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 19;

    cout << isHappy(n);
    return 0;
}