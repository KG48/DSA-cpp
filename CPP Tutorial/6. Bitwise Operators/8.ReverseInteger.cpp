#include <bits/stdc++.h>
using namespace std;

int ReverseNum(int num) {

    int ans= 0;
    
    while(num>0) {

        int rem = num % 10;
        num = num / 10;
        ans = ans * 10 + rem;

    }     

    return ans;
}

int main() {

    cout << ReverseNum(125);

    return 0;
}