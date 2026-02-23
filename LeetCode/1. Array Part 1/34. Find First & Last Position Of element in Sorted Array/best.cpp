#include <bits/stdc++.h>
using namespace std;

int FirstIndex(vector<int> & nums, int target) {
    int st = 0; int end = nums.size()-1; int ans = -1;
    
    while(st <= end) {
        int mid =  st + (end - st)/2;
        if(nums[mid] == target) {
            ans = mid;
            end = mid - 1;
        }else if(nums[mid] < target) {
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}

int LastIndex(vector<int> & nums, int target) {
    int st = 0; int end = nums.size()-1; int ans = -1;

    while(st <= end) {
        int mid = st + (end - st)/2;
        if(nums[mid] == target) {
            ans = mid;
            st = mid + 1;
        }else if (nums[mid] < target) {
            st = mid + 1;
        }else {
            end = mid -1;
        }
    }
    return ans;
}

vector<int> FindRange(vector<int> & nums, int target) {
    return {FirstIndex(nums, target), LastIndex(nums, target)};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {2,3,4,5,8,8,10};
    int target = 8;

    vector<int>  result = FindRange(nums, target);

    for(int i : result) {
        cout << i << " ";
    }
     
    return 0;
}