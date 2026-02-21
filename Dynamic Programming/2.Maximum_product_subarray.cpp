#include <bits/stdc++.h>
using namespace std;

int subarray(vector<int> nums){
    int mx = nums[0], mn = nums[0], ans = nums[0];

    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] < 0) swap(mx,mn);
        mx = max(nums[i], mx * nums[i]);
        mn = min(nums[i], mn * nums[i]);
        ans = max(ans, mx);
    }
    return ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {2,3,-2,4};

    cout << subarray(nums);
    return 0;
}