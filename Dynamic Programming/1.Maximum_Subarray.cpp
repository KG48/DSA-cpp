#include <bits/stdc++.h>
using namespace std;

int MaximumSubArr(vector<int> & nums) {

    int MaxSum = INT_MIN;
    int CurrSum = 0;
    for(int i=0; i < nums.size(); i++) {

        CurrSum += nums[i];
        MaxSum = max(MaxSum, CurrSum);

        if(CurrSum < 0) {
            CurrSum = 0;
        }
    }
    return MaxSum;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << MaximumSubArr(nums);
    
    return 0;
}