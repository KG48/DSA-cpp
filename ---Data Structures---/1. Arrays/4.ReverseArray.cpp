#include <bits/stdc++.h>
using namespace std;


// start and end are two pointers we are going to use for swapping 
// time complexity = O(n);

void ReverseArr(int arr[], int size) {
    int start=0; int end = size-1;

 
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    
    int arr[] = {4,2,7,8,1,2,5};

    int size =7;
    ReverseArr(arr,7);

    for(int i=0;i<7;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}