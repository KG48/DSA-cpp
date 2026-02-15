#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin >> x >> y;

    cout << "Addition :- " << x + y << endl;
    cout << "Subtraction :- "<< x - y << endl;
    cout << "Multiplication :-"<< x * y << endl;
    if(y != 0) {
    cout << "Division :-" << (float)x/y << endl;
    }else {
        cout << "Division not possible ";
    }

    return 0;
}