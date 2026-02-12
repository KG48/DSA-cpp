//Kadane's agorithm is the most optimised way for solving maximum subarray sum 
// this algo. works upon adding two integers
// optimized version of brute force logic ..we drop negative sum to zero because negative some will only reduce the sum
// and we want largest sum 

#include <bits/stdc++.h>
using namespace std;

int KadanesAlgo(int arr[], int size) {

    int currSum=0;
    int maxSum=INT_MIN;

    for(int i=0;i<size;i++) {

        currSum += arr[i];
        maxSum = max(currSum, maxSum);

        if(currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
}

int main() {

    int size=7;

    int arr[7] = {3, -4, 5, 4, -1, 7, -8};

    cout << "Maximum Subarray Sum :- " << KadanesAlgo(arr, 7);

    return 0;
}