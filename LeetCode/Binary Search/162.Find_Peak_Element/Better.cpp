#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &nums) {

    if(nums.size()== 1) {
        return 0;
    }
    if(nums.size() == 2) {
        if(nums[0] > nums[1]) {
            return 0;
        }else {
            return 1;
        }
    }
    if(nums.size() > 2) {

        if(nums[nums.size() - 1] > nums[nums.size() -2]) {
            return nums.size()-1;
        }

        if(nums[0] > nums[1]) return 0;
    }

    for(int i = 1; i < nums.size()-1; i++) {
        if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
            return i;
        }
    }
    return nums.size()-1;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {1,3,2,4,5,6,5};

    int result = findPeakElement(nums);

    cout << result;

    
    return 0;
}