#include <iostream>
using namespace std;

int printHello() {

    cout << "Hello\n";
    return 3;
}

int main() {

    int val = printHello();
    cout << "Value =" << val << endl;


    cout << "&&\n"; //Or we can print the hello and value in the same way given bellow :

    cout << printHello()<<endl;
    return 0;
}