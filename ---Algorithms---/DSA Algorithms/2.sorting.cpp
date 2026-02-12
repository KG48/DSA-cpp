#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector<int> k = {5, 6, 9, 10, 23};

    sort(k.begin(), k.end(), greater<int>());   //for decreasing order

    for(int val : k ) {
        cout << val << " ";
    }
    cout << endl;

    //if vector is having pairs 

    vector <pair<int, int>> s = {{2,1}, {4, 9}, {0, 9}, {-10, 2}, {12, 10}};

    sort(s.begin(), s.end());

    for(auto val : s) {
        cout << val.first << " " << val.second << endl;   // gets sorted on the basis of 1st value of pair 
    }

    
    return 0;
}