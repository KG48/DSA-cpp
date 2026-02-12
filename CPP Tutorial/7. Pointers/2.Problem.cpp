#include <iostream>
using namespace std;

int main() {

    int a = 5;
    int *p = &a;
    int **q = &p;

    cout << *p << endl;  //5
    cout << **q << endl;  // 5
    cout << p << endl;   //address of a
    cout << *q << endl;  //value at p = address of a 
}