#include <iostream>
#include <vector>
using namespace std;


int mooresAlgo(vector <int> &nums) {

    int freq =0; int ans=0;
    for(int i=0; i<nums.size();i++) {

        if(freq == 0){
            ans = nums[i];
        }
        if(freq == nums[i]){
            freq++;
        }
        else {
            freq--;
        }
    }
    return ans;
}

int main() {

    vector<int> vec = {2, 2, 1, 1, 1, 2, 2};

    cout << mooresAlgo(vec);

    return 0;
}