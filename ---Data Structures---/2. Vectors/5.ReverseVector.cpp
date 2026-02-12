#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

void ReverseVector(vector<int> &nums ){

    int start=0; int end = nums.size()-1;
    while(start < end) {
        swap(nums[start] , nums[end]);
        start ++;
        end --;
    }
}

int main() {

    vector<int> vec = {1, 2, 3, 4, 5};

    ReverseVector(vec);

    for(int i=0; i< vec.size(); i++) {
        cout << vec[i] << " ";
    }

    return 0;
}