#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int recBinarySearch(vector <int> &nums, int target, int st, int end) {
 
    if(st <= end) {
        int mid = st + (end- st)/ 2;
        
        if(target > nums[mid]) {
            return recBinarySearch(nums, target, mid+1, end);               // recursive call 
        }
        else if(target < nums[mid]) {                               
            return recBinarySearch(nums, target, st, mid - 1);                 // recursive call 
        }else 
        return mid;
    }
    return -1;
}

int main() {

    vector <int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int target = 9;

    int index = recBinarySearch(arr, target, 0, arr.size() - 1);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
} 