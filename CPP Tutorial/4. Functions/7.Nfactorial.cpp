#include <iostream>
using namespace std;

int Factorial(int N){

    int fact=1;

    for(int i=1;i<=N;i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {


    cout << "Factorial is : " << Factorial(5);
    return 0;
}