#include <bits/stdc++.h>
#include <vector>
using namespace std;

int MaxSubArrSum(vector<int> &nums) {

    int currSum=0; int maxSum = INT_MIN;

    for(int i : nums) {

        currSum = currSum + i;

        maxSum = max(currSum, maxSum);

        if(currSum < 0) {
            currSum=0;
        }
    }
    return maxSum;
}

int main() {

    vector<int> vec = {1,2,3,4,5};

    MaxSubArrSum(vec);

    cout << "Maximum Subarray Sum :- "<< MaxSubArrSum(vec);

    return 0;
}