#include <iostream>
using namespace std;

int main() {
    int balance = 500;
    int withdraw = 600;

    try {
        if (withdraw > balance) {
            throw "Insufficient balance";
        }
        cout << "Transaction successful";
    }
    catch (const char* msg) {
        cout << "ERROR : " << msg;
    }

    return 0;
}