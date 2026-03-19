#include <bits/stdc++.h>
using namespace std;

string CreatePalindrome(string s) {

    unordered_map<char, int> freq;
    
    for(char c : s) {
        freq[c]++;
    }

    string left= "";
    string center= "";
    string right = "";
    bool centerUsed = false;

    for(auto i : freq) {
        char ch = i.first;
        int count = i.second;

        if(count == 1) {

            // for one sigle allowed
            if(!centerUsed){
            center += ch;
            centerUsed = true;
            }
        }else{
            for(int i = 0; i < count/2; i++) {
                left = left +ch;
                right = ch + right;   // reverse side
            }

            if(count % 2 == 1 && !centerUsed) {
                center += ch;
                centerUsed = true;
            }
        }
    }
    string Palindrome = left + center + right;

    return Palindrome;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "aaAAAbbccDDde";

    cout << CreatePalindrome(s);

    

    return 0;
}