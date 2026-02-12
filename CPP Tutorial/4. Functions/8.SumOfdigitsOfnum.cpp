#include <iostream>
using namespace std;


int sumOFdigits(int num) {

    int digSum=0;

    while(num > 0) {
        int lastdig = num % 10;
        num /=10;

        digSum += lastdig;
    }

    return digSum;
}

int main() {


    cout << "Sum is : "<<sumOFdigits(125);
    return 0;
}