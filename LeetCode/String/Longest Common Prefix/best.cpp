#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> & strs) {
    int n = strs.size();

    if(strs.empty()) return "";

    string prefix = strs[0];

    for(int i = 1; i < strs.size(); i++) {
        while(strs[i].find(prefix) != 0) {
            prefix.pop_back();

            if(prefix.empty()) return "";
        }
    }
    return prefix;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> strs = {"flower", "flow", "flight"};

    cout << longestCommonPrefix(strs);
    return 0;
}