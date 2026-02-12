
// check if a number is prime or not 

#include<iostream>
using namespace std;

int main() {

    int num;
    int i;

    cout << "enter the N :- ";
    cin >> num;
    for(i=2; i<=num; i++) {

        if(num % i == 0) {
            cout << "Number is Non Prime\n";
            break;
        }

        else {
            cout << "Number is Prime \n ";
            break;
        }
    }
    return 0;

}