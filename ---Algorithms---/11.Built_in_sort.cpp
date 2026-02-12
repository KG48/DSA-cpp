#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std; 



void SortArrayAscending(vector<int> &nums) {   // Ascending Order

    sort(nums.begin(), nums.end()); 
    

}

void ReverseArray(vector<int> &nums) {

    sort(nums.begin(), nums.end());          // first sort the array then reverse it .. 
    reverse(nums.begin(), nums.end());      // For also Descending Order 
}



void SortArrayDecsending(vector<int> &nums) {      // Decsending Order 

    sort(nums.begin(), nums.end(), greater<int>());
}

void PrintArray(vector<int> &nums) {
    
    for(int i : nums) {
        cout << i << " ";
    }
    cout << endl;
}
int main() {

    vector <int> nums = {5, 3, 0, 2, 1, 1, 9, 8};

    SortArrayAscending(nums);
    PrintArray(nums);

    SortArrayDecsending(nums);
    PrintArray(nums);

    ReverseArray(nums);
    PrintArray(nums);
    

    return 0;
}