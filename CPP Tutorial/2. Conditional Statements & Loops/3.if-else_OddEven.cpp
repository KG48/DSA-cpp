#include <iostream>
using namespace std;

int main() {

    int num;
    cout << "Enter a Number \n";
    cin >> num;

    if( num % 2 == 0) {
        cout << "Number is even \n";
    }
    else {
        cout << "Number is Odd \n";
    }
}