#include <iostream>
#include <vector>
using namespace std;

int MajorityElement(vector <int> &nums) {

    for(int i=0; i<nums.size(); i++) {
        int freq = 0;

        for(int j=0; j<nums.size(); j++) {    // time complexity = O(n^2)
            if(nums[i] == nums[j]) {
                freq ++;
            }
        }
        if(freq > nums.size()/2) {

        return nums[i];
    }
   
    }
    return -1;
}

int main() {

    vector <int> vec = {2,2,1,1,1,2,2};

    cout << MajorityElement(vec);

    return 0;
}