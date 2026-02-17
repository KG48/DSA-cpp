#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> FourSum(vector<int> &nums,  int target) {
    int n = nums.size();
    vector<vector<int>> ans;

    for(int a = 0; a < n; a++) {
        if(a > 0 && nums[a]==nums[a-1]) continue;
        for(int b = a + 1; b < n; b++) {
            if(b > a + 1 && nums[b] == nums[b-1]) continue;
            int c = b + 1; int d = n - 1;

            while(c < d) {
                long long sum = (long long)nums[a] + nums[b] + nums[c]+ nums[d];
                if(sum < target) {
                    c++;
                }else if(sum > target) {
                    d--;
                }else {
                    ans.push_back({nums[a], nums[b], nums[c], nums[d]});
                    c++;
                    d--;

                    //skip duplicates
                    while(c < d && nums[c] == nums[c-1]) c++;
                    while(c < d && nums[d]== nums[d+1]) d--;
                }
            }
        }
    }
    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {2,2,2,2,2};
    int target = 8;

    vector<vector<int>> result = FourSum(nums, target);

    for(auto &row : result){
        for(auto &val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}