#include <bits/stdc++.h>
using namespace std;


    char findTheDifference(string s, string t) {
        char result = 0;

        for(char c : s) {
            result ^= c;
        }

        for(char c : t) {
            result ^= c;
        }

        return result;
    }


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "abcd";
    string t = "abcde";
    cout << findTheDifference(s,t);

    
    
    return 0;
}