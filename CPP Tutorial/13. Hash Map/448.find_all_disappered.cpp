#include <bits/stdc++.h>
using namespace std;


vector<int> FindDisappeadredNum(vector<int> & nums) {
        vector<int> ans;

        // store freq of each elememt 
        unordered_map<int, int> freq;

        for(int i : nums) {
            freq[i]++;
        }

        // check whicgh element has zero freq //means not avaialble 

        int Max_value = *max_element(nums.begin(), nums.end());

        for(int i = 1; i<= Max_value; i++) {
            if(freq[i] == 0) {
                ans.push_back(i);
            }
        }
        return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {1,3,2,5,7,6,9};   // 4 and 8 missing

    vector<int> result = FindDisappeadredNum(nums);
    
    for(auto x : result) {
        cout << x << " ";
    }
    return 0;
}