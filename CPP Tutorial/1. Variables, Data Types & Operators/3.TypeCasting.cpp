#include <iostream>
using namespace std;

int main() {

    double price = 100.99;

    int newPrice = (int)price;
    cout << newPrice << endl;

    return 0;
}

// type conversion = [implicit]...for eg float to double ...we get this done by compiler 
// type casting = [explicit] ... we have to do this on our own..