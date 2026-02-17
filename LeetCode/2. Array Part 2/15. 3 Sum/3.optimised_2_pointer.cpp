#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ThreeSum(vector <int>  &nums) {

    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());    // two pointer only applicable when array is sorted

    for(int i = 0; i <n; i++) {   // we are finding triplets for fixed nums[i] value

        if(i > 0 && nums[i] == nums[i-1]) continue;     // we are skipping same nums[i] values 

        int j = i + 1; int k = n - 1;    // initilizing two pointers 
        
        while(j < k) {                  // j pointer must be less than k ..
        int sum = nums[i] + nums[j] + nums[k];      // calucalte the sum 

        if(sum > 0) {                  
            k--;
        }else if(sum < 0) {
            j++;
        }else {
            ans.push_back({nums[i], nums[j], nums[k]});
            j++;
            k--;

            while(j < k && nums[j] == nums[j-1]) j++;
            while(j < k && nums[k] == nums[k+1]) k--;
        }
    }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {-1,0,1,2,-1,-4};
    
    vector<vector<int>> result = ThreeSum(nums);

    for(auto &rows : result) {
        for(auto &val : rows) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}