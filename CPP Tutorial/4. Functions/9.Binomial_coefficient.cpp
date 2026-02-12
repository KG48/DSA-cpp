#include <iostream>
using namespace std;


//nCr = n!/r!(n-r)!   

int Factorial(int n){

    int fact=1;
    for(int i=1;i<=n;i++) {
        fact=fact*i;
    }
    return fact;
}

int nCr(int n, int r) {

    int fact_n = Factorial(n);                  //we did this because we want to use factorial function in this nCr function 
    int fact_r = Factorial(r);
    int fact_nmr = Factorial(n-r);              //nmr= n minus r = n-r

    return fact_n / (fact_r * fact_nmr);
}

int main() {

    cout << nCr(8,2) << endl;
    return 0;
}