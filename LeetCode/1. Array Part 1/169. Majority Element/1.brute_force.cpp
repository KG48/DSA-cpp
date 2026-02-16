#include <bits/stdc++.h>
using namespace std;

/*Problem Statement :
Given an array ‘nums’ of size n, return the majority element.
As we have already discussed above, the majority element is the element that appears more than [n / 2] times.
If no such element exists, then return -1.*/ 

int majorityElement(vector<int> & nums) {
    int count = 0; int ans = 0;

    for(int i = 0; i <nums.size(); i++) {
        if(count == 0) {
            ans = nums[i];
        }
        if(ans == nums[i]) {
            count ++;
        }else {
            count --;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {2,2,1,1,1,2,2};

    int result = majorityElement(nums);

    cout << result;
    
    return 0;
}