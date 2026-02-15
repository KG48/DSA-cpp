#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z;
    cout << "Enter x :- " << flush;
    cin >> x;
    cout << "Enter y :- " << flush;
    cin >> y;
    cout << "Enter z :- " << flush;
    cin >> z;

    if(x > y && x > z) {
        cout << "x is larger number " << endl;
    }else if(y > z && y > x) {
        cout << "y is larger number "<< endl;
    }else {
        cout << "z is larger number " << endl;
    }
    return 0;
}