#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cout << "Enter the Number :- " << flush;
    cin >> num;

    if(num & 1) {
        cout << "Number is Odd" << endl;
    }else {
        cout << "Number is Even" << endl;
    }
    return 0;
}