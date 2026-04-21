#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cout << "Enter the Number :- " << flush;
    cin >> num;

    if(num % 2 == 0) {
        cout << "Number is Even" << endl;
    }else {
        cout << "Number is Odd" << endl;
    }
    
    return 0;
}