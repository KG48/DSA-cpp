#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // index points to the last position of nums1 (where largest element goes)
        int index = m + n - 1;

        // i points to the last valid element in nums1
        int i = m - 1;

        // j points to the last element in nums2
        int j = n - 1;

        // merge both arrays from the end
        while (i >= 0 && j >= 0) {

            // if current element of nums1 is greater or equal
            if (nums1[i] >= nums2[j]) {

                // place nums1[i] at the current index
                nums1[index] = nums1[i];

                // move index and i left
                index--;
                i--;

            } else {

                // place nums2[j] at the current index
                nums1[index] = nums2[j];

                // move index and j left
                index--;
                j--;
            }
        }

        // if nums2 still has elements left, copy them
        while (j >= 0) {

            // copy remaining element of nums2
            nums1[index] = nums2[j];

            // move index and j left
            index--;
            j--;
        }
    }

    int main() {
        vector<int> nums1 = {1, 3, 5, 0, 0, 0};
        vector<int> nums2 = {2, 6, 9};


        merge(nums1, 3, nums2, 3);

        for(int x : nums1) {
            cout << x << " ";
        }

        return 0;
    }
