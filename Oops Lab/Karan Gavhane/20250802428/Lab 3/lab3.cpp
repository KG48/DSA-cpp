#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t1 = 0;
    int t2 = 1;
    int t3;
    int n;
    cout << "Enter Series Size :-" << flush;
    cin >> n;

    for(int i = 0; i<=n; i++) {
        cout << t1 << " ";
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        
    }
    
    cout << t3;
    return 0;
}