#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> & nums) {
    unordered_set<int> s;

    for(int val : nums) {
        if(s.find(val) != s.end()) {
            return val;
        }
        s.insert(val);
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {3,1,3,4,2}; 
    
    return 0;
}