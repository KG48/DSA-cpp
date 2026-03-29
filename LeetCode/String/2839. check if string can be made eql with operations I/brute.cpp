#include <bits/stdc++.h>
using namespace std;

bool canbeEqual(string s1, string s2) {

    bool EvenGroup = s1[0]==s2[0] && s1[2] == s2[2] || s1[0] == s2[2] && s1[2] == s2[0];

    bool OddGroup = s1[1]==s2[1] && s1[3] == s2[3] || s1[1] == s2[3] && s1[3] == s2[1];

    return EvenGroup && OddGroup;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    string s1 = "abcd";
    string s2 = "cdab";

    cout << canbeEqual(s1, s2);
    return 0;
}