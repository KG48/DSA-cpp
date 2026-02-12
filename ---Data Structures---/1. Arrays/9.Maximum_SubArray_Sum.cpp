// Maximum Subarray Sum printing 

#include <bits/stdc++.h>
using namespace std;

int MaxSubArrSum(int arr[], int size) {

    int maxSum = INT_MIN;
    for(int st=0; st<size; st++) {
        int currSum=0;

        for(int end=st; end<size; end++) {              // Time Complexity ;-  O(n^2)

            currSum += arr[end];

            maxSum=max(currSum, maxSum);
            
        }
    }
    return maxSum;
}

int main() {

    int size=5;
    int arr[5] = {1,2,3,4,5};

   

    cout << "Maximum Subarry Sum :- "<< MaxSubArrSum(arr, 5);


    return 0;
}