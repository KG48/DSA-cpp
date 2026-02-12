#include <iostream>
using namespace std;

int BinToDec(int binNum) {

    int ans=0;
    int pow=1;
    while(binNum > 0) {

        int rem = binNum % 10;
        ans = ans + rem * pow;
        binNum /= 10;
        pow *=2;
    }
    return ans;
}

int main() {

    int binNum = 101;

    cout << binNum << " = " << BinToDec(binNum);

    return 0;
}