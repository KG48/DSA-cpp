#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> & nums) {

    int result = 0;
    for(int i = 0; i< 32; i++) {
        int sum = 0;
        for(int x : nums) {
            if(x & (1 << i)) {
                sum ++;
            }
        }
        if(sum % 3 != 0) {
            result |= (1 << i);
        }
    }
    return result;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {11,0,11,0,11,0,99};

    int result = singleNumber(nums);

    cout << result;
    
    return 0;
}