#include <iostream>
#include <vector>
using namespace std;

void PairSum(vector<int> &nums, int target) {

    for(int i=0; i< nums.size(); i++) {

        for(int j=i+1; j< nums.size(); j++) {           //Time complexity = O(n^2)

            if(nums[i] + nums[j] == target){        

                cout << i <<endl;
                cout << j <<endl;
            }
        }
    }
}

int main() {

    vector<int> vec = {2, 11, 7, 15};

    PairSum(vec, 9);

    return 0;
}