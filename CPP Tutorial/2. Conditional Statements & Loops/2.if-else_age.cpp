#include<iostream>
using namespace std;

int main() {

    int age;
    cout << "Enter the Age :- \n";
    cin >> age;

    if(age>=18) {
        cout << "Person is Adult \n";
    }
    else {
        cout << "Person is Teenager";
    }
}