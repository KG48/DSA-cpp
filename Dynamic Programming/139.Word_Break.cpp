#include <bits/stdc++.h>
using namespace std;

//decision tree
bool wordBreak(string s, vector<string> &wordDict) {

    int n = s.size();

    vector<bool> dp(n + 1, false);

    dp[n] = true;  // base case for empty string 
    for(int i = n - 1; i >= 0; i--) {
       for(string word : wordDict) {

        if( i + word.size() <= n && s.substr(i, word.size()) == word) {
            if(dp[i+ word.size()] == true) {
                dp[i] = true;
                break;
            }
        }
       }

    }
    return dp[0];
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "leetcode";
    vector<string> wordDict = {"leet", "code"};

    cout << wordBreak(s, wordDict);

    return 0;
}