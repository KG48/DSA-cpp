#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums) {

    // printing vector
    int x =0;
    for(int i : nums) {
        x = x ^ i;
        
    }
    cout << " Single Number is " << x;

    return 0;
}

int main() {

    vector<int> vec = {1, 1, 2};

    singleNumber(vec);

    return 0;
}
