#include <bits/stdc++.h>
using namespace std;

int ReverseNum(int num) {
    
    int ans = 0;

    while(num != 0) {
        int digit = num % 10;   // get the last digit of number

        if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
            return 0;
        }

        ans = ans * 10 + digit;
        num = num / 10;
    }
    return ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num = -123;

    cout <<  ReverseNum(num);
    return 0;
}