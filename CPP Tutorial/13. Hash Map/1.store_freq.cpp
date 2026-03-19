#include <bits/stdc++.h>
using namespace std;

int countFreq(string s) {

    unordered_map<char, int> freq;

    for(char c : s) {
        freq[c]++;
    }
     for(auto i : freq) {
        cout << i.first << " = "<<  i.second << endl;
    }
    return 0;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "abccccdd";

    countFreq(s);
    
    return 0;
}