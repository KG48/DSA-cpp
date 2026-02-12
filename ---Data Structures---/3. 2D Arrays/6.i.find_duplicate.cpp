#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> & nums) {

    int slow = nums[0];
    int fast = nums[0];

    do {
        slow = nums[slow];   // update by +1
        fast = nums[nums[fast]]; // update by +2
    } while (slow != fast);

    slow = nums[0];     // when both gets equal we intialize slow again

    while(slow != fast) {
        slow = nums[slow];   // this time update by only 1 
        fast = nums[fast];   // +1
    }
    // now both slow and fast will get same value which is repeating 

    return fast;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {1, 3, 4, 2, 2};   // this works only for array size = 1 + n and values range is from 1 to n

    cout << findDuplicate(nums);
      
    return 0;
}