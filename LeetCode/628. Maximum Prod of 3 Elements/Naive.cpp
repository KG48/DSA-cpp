#include <bits/stdc++.h>
using namespace std;

int MaximumProd( vector<int> & nums) {

    sort(nums.begin(), nums.end());
    int n = nums.size();
    
    return max(
        nums[n-1]*nums[n-2]*nums[n-3],
        nums[0]*nums[1]*nums[n-1]   
    );
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums ={4,5,-2,1,7};

    cout << MaximumProd(nums);
    
    return 0;
}