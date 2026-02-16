#include <bits/stdc++.h>
using namespace std;

/*Using three pointers :
Instead of adding elements from the front (which would need shifting), we start from the back of nums1 and place the largest elements first. This avoids extra space and shifting.

1. We use 3 pointers:

One at the end of valid numbers in nums1
One at the end of nums2
One at the very end of nums1 (where we start placing elements)

2. Compare numbers from the end of both arrays and put the larger one at the end of nums1.
3. Keep moving backward and repeat this until one of the arrays is finished.
4. If anything is left in nums2, copy it to the beginning of nums*/

void merge(vector<int> & nums1, int m, vector<int>& nums2, int n) {
    
    int index = m + n - 1; // last position  of nums 1
    int i = m - 1;  // last valid element in nums1
    int j = n - 1;   // last element in nums2
    while(i >= 0 && j >= 0) {// merge nums1 array from the back to avoid overwriting 
        if(nums1[i] >= nums2[j]) {   // compare elements of both array from the back

            nums1[index] = nums1[i];  // put elements in the nums1
            index--; i--;    // backtrace the index and element position
        }else {
            nums1[index] = nums2[j]; // nums2 element is greater than nums1 element
            index--; j--;
        }
    }

    while(j >= 0) {    // at end copy all elements of nums2 if any remains
        nums1[index] = nums2[j];
        index--;
        j--;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};  // nums1 has extra space for nums2
   int m = 3;  // Number of actual elements in nums1
   vector<int> nums2 = {2, 5, 6};
   int n = 3;  // Number of elements in nums2

    merge(nums1,m,nums2,n);

   for(auto val : nums1) {
    cout << val << " ";
   }
    
    return 0;
}