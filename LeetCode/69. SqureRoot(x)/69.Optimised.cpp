#include <bits/stdc++.h>
using namespace std;

int sqrt(int x) {

    long long st=1, end = x;
    int ans = 0;

    if (x == 0) return 0;         // O(logx)
    
    while(st <= end) {
        long long mid = st + (end - st)/2;
        if(mid * mid == x) {
            return mid;
        }else if(mid * mid < x) {
            ans = mid;  // store possible ans 
            st = mid + 1;
        }else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cout << sqrt(16);
    
    return 0;
}