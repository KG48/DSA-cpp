#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MajorityElement(vector <int> &nums) {

    // we first sort the vector 

    sort(nums.begin(), nums.end());

    // count frequency 

    int freq = 1; 

    for(int i=1;  i< nums.size(); i++) {
        if(nums[i] == nums[i-1]) {
            freq++;
        }
        else {
            freq = 1;
            
        }
        if(freq > nums.size()/2) {

            return nums[i];
        }
    }
    // fallback (majority element always exists)
    return nums[0];
}

int main() {

    vector <int> vec = {2,2,1,1,1,2,2};

    cout << MajorityElement(vec);

    return 0;
}