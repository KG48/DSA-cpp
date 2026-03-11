#include <bits/stdc++.h>
using namespace std;

int calculate(string s) {

    // int a = s[0] - '0';    //Extract 1st digit
    //  char op = s[1];        // Extract the oparator
    // int b = s[2]-'0';       // Extract the 2nd ditgit

    int a = 0, b = 0;
    char op;

    int i = 0;
    // skip spaces
    while(s[i] == ' ') i++;

    //first Number
    while(isdigit(s[i])) {
        a = a * 10 + (s[i] - '0');
        i++;
    }
    // skip spaces 
    while(s[i] == ' ') i++;

    //operator
    op = s[i];
    i++;

    //skip spaces
    while(s[i] == ' ') i++;

    //secong number 
    while(i < s.size() && isdigit(s[i])) {
        b = b * 10 + (s[i] - '0');
        i++;
    }

    int result;

    if(op == '+') result = a + b;
    if(op == '-') result = a - b;
    if(op == '*') result = a * b;
    if(op == '/') result = a / b;

    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s = "1 + 1";

    cout << calculate(s);

    return 0;
}