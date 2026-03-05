#include <bits/stdc++.h>
using namespace std;

long long maxProduct(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    
    long long prod1 = 1LL * nums[n-1] * nums[n-2] * nums[n-3]; 
    long long prod2 = 1LL * nums[0] * nums[1] * nums[n-1];     
    return max(prod1, prod2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i = 0; i < n; i++) cin >> nums[i];
        cout << maxProduct(nums) << "\n";
    }

    return 0;
}