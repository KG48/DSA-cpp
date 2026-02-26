#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int low = 0, high = nums.size() - 1;

    while(low < high) {
        int mid = low + (high - low) / 2;

        if(nums[mid] > nums[mid + 1])
            high = mid;
        else
            low = mid + 1;
    }

    return low;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {1,2,3,4,5,4};

    int result = findPeakElement(nums);

    cout << result;
    return 0;
}