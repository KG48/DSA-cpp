#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {

    string s = "daabcbaabcbc";    // remove part = abc
                                  // "daabcbaabcbc" = "da abc baabcbc"
                                  // "dabaabcbc" = "daba abc bc"
                                  // "dababc" = "dab abc" => dab

    string part = "abc";
    int  length = part.length();

    while(s.length() > 0 && s.find(part) <s.length()) {
        int st = s.find(part);   // st is updating every time 
        s.erase(st, length);
    } 

    cout << s << endl;    // dab 
}