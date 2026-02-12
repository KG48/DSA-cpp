#include <iostream>
using namespace std;

int decNumToBinary(int decNum) {

    int ans = 0;
    int power = 1;

    while(decNum > 0){

        int rem = decNum % 2;
        decNum = decNum/2;
        
        ans = ans + rem*power;
        power = power * 10;

        
    }
    return ans;    //binary form 
}

int main() {

    int decNum = 5;
    cout << decNum << " = "<< decNumToBinary(decNum);

    return 0;
}