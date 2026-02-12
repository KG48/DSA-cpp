#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 5;
    int y =5;

    if(x > y) {
        cout << "x is greater";
    }else if (y >= x) {
        cout << "y is greater";
    }else {
        cout << "Both are equal";
    }
    
    return 0;
}