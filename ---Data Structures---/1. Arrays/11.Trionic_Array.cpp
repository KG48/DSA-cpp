#include <bits/stdc++.h>
using namespace std;

bool isTrionic(vector<int> & nums) {

    // Total number of elements in array
    int n = nums.size();

    // If array has less than 3 elements,
    // it is impossible to form 3 phases
    if(n < 3) return false;

    // Pointer used to traverse array
    int i = 0;

    // ---------------- PHASE 1 ----------------
    // Strictly Increasing Phase
    // Move forward while next element exists
    // AND current element is smaller than next
    while(i + 1 < n && nums[i] < nums[i + 1]) {
        i++;
    }

    // If i == 0 → means array never increased
    // Example: [5,4,3,2]
    // If i == n-1 → whole array only increasing
    // Example: [1,2,3,4]
    // Both are invalid trionic patterns
    if(i == 0 || i == n - 1) {
        return false;
    }

    // ---------------- PHASE 2 ----------------
    // Strictly Decreasing Phase
    // Continue traversal while elements decrease
    while(i + 1 < n && nums[i] > nums[i + 1]) {
        i++;
    }

    // If after decreasing phase we reach end,
    // it means third increasing phase never happened
    // Example: [1,3,5,4,2]
    if(i == n - 1) {
        return false;
    }

    // ---------------- PHASE 3 ----------------
    // Strictly Increasing Again
    // Continue traversal while elements increase again
    while(i + 1 < n && nums[i] < nums[i + 1]) {
        i++;
    }

    // Valid trionic array ONLY if
    // we successfully reached last index
    return i == n - 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {1,3,5,4,2,6};

    // Prints 1 if trionic, 0 otherwise
    cout << isTrionic(nums);

    return 0;
}
