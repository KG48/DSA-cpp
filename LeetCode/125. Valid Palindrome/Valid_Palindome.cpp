#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
        string newStr = "";
        for (char i : s) {
            if (isalnum(i)) {
                newStr += tolower(i);
            }
        }
        int l = 0, r = newStr.size() - 1;
        while (l < r) {
            if (newStr[l++] != newStr[r--]) return false;
        }
        return true;
    }




int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "abba";

    cout << isPalindrome(s);
    return 0;
}