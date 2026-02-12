#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std ;

int main() {

    string str = "abc";
    int start=0; int end = str.size()-1;

 
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }

    cout << str << endl;

    reverse(str.begin(), str.end());  // built in operator function to reverse 

    cout << str << endl;

    return 0;
}