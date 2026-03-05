#include <bits/stdc++.h>
using namespace std;

int MinOpertions(string s) {

    int count = 0;
    for(int i = 1; i< s.size(); i++) {
        if(s[i] == s[i-1]) {
            if(s[i] == '0'){
                s[i] = '1';
            }
                else{
                    s[i]='0';
                }
                count++;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "0100000";

    cout << MinOpertions(s);
    return 0;
}