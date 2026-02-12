// Sort Array with 0s, 1s & 2s
// Dutch National Flag Algorithm - DNF algo -- used for sorting array in O(n) time complexity only by 1 pass of loop 
// [2,0,2,1,1,0,1,2,0,0]

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void sortColors(vector<int> &nums) {
    int n = nums.size();
    int low = 0; int mid = 0; int high = n -1;

    while(mid <= high) {
        if(nums[mid]== 0) {
            swap(nums[mid], nums[low]);
            mid++; low++;
        }else if(nums[mid] == 1) {
            mid++;
        }else{
            swap(nums[mid]  , nums[high]);
                high--;
            
        }
    }
}
int main() {

    vector<int> vec = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};

    sortColors(vec);

    for(int x : vec) {
        cout << x << " ";
    }
    return 0;
}