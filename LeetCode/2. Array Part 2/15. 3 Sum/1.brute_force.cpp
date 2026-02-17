#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> & nums) {
    int n = nums.size();
    vector<vector<int>> ans; // to store unique triplets

    set<vector<int>> s; // to get unique triplets  

    for(int i = 0; i< n; i++) {
        for(int j = i + 1; j< n; j++) {
            for(int k = j + 1; k < n; k++) {
                if(nums[i] + nums[j] + nums[k] == 0){ // we got unique triplet
                    vector<int> trip = {nums[i],nums[j], nums[k]};
                    sort(trip.begin(), trip.end());

                    if(s.find(trip) == s.end()) {
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {-1,0,1,2,-1,-4};

    vector<vector<int>> result = threeSum(nums);

    for(auto &row : result) {
        for(auto &val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}