#include <bits/stdc++.h>
using namespace std;


vector<int> InterSection(vector<int>& nums1, vector<int>& nums2) {

    vector<int> merged;

    merged.insert(merged.end(), nums1.begin(), nums1.end());
    merged.insert(merged.end(), nums2.begin(), nums2.end());

    sort(merged.begin(), merged.end());

    vector<int> ans;

    for(int i = 0; i < merged.size() - 1; i++) {
        if(merged[i] == merged[i+1]) {

            // Avoid duplicate insertion
            if(ans.empty() || ans.back() != merged[i]) {
                ans.push_back(merged[i]);
            }
        }
    }

    return ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};

    vector<int> result = InterSection(nums1, nums2);

    for(int i : result) {
        cout << i << " ";
    }
    return 0;
}