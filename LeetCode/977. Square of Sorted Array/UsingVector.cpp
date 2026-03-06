#include <bits/stdc++.h>
using namespace std;

vector<int> SortedSqr(vector<int> & nums) {
    vector<int>  ans;
    
    for(int i = 0; i < nums.size(); i++) {
        ans.push_back(nums[i]*nums[i]);
    }
    
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {-4,-2,1,3,5};

    vector<int> result= SortedSqr(nums);

    for(auto val : result) {
        cout << val << " ";
    }

    
    return 0;
}