#include <bits/stdc++.h>
using namespace std;
// Function to merge nums2 into nums1 and sort the result
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
   // Copy nums2 elements into the remaining space of nums1
   for (int i = m; i < m + n; i++) {
       nums1[i] = nums2[i - m];
   }


   // Sort the final merged array
   sort(nums1.begin(), nums1.end());
}


int main() {
   // Example input
   vector<int> nums1 = {1, 2, 3, 0, 0, 0};  // nums1 has extra space for nums2
   int m = 3;  // Number of actual elements in nums1
   vector<int> nums2 = {2, 5, 6};
   int n = 3;  // Number of elements in nums2


   // Call merge function
   merge(nums1, m, nums2, n);


   // Output the merged and sorted array
   cout << "Merged array: ";
   for (int num : nums1) {
       cout << num << " ";
   }
   cout << endl;
   return 0;
}

