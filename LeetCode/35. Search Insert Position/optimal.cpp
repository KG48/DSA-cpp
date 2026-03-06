#include <bits/stdc++.h>
using namespace std;

int searchPosition(vector<int> & nums, int target) {
    int n = nums.size();
    int st = 0;
    int end = n-1;

    while(st <= end) {
        int mid = st + (end - st)/2;
        if(nums[mid] == target) {
            return mid;
        }else if(nums[mid] < target) {
            st = mid + 1;
        }else{
            end = mid - 1;
        }
        
    }
    return st;
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {1,3,4,5};
    int target = 6;

    cout << target << " is found at loc " << searchPosition(nums, target);

    return 0;
}