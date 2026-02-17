#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ThreeSum(vector<int> & nums) {

    int n = nums.size();         // a + b + c = 0;      b + c = -a;  -a = target; 

    set<vector<int>> uniqueTriplets;

    for(int i =0; i<n ; i++) {
       int target = -nums[i];  // we take target value
        // now we have to find two another numbers from array whose sum  is equal to the target

        set<int> s;  // to find last value
        for(int j = i + 1; j < n; j++) {    // soo we get nums[j]=b here so our last number nums[k] = c = target - b;
            int thirdNum = target - nums[j];

            if(s.find(thirdNum) != s.end()) {   // if exits 
                vector<int> trip = {nums[i], nums[j], thirdNum};
                sort(trip.begin(), trip.end());

                uniqueTriplets.insert(trip);
            }

            s.insert(nums[j]);   // giving 2nd number value to the set 
        }
    }
    vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
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