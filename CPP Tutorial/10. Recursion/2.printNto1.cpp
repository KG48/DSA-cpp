#include <bits/stdc++.h>
using namespace std;

void printNums(int n) {             //Recursive Function

    if(n==1) {
        cout << "1\n";
        return;
    }
    cout << n << " ";    //n, n-1, n-2....to 1
    printNums(n-1);    //calling againn
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 10;

    printNums(n);
    
    return 0;
}