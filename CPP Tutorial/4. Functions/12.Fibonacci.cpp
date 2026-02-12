// Write a function to print n ters of the fibonacci sequence. 

// fibonacci sequence :- 0, 1, 1, 2, 3, 5, 8, 13, 21, 34....
// here fib(0) = 0 , fib(1)=1, fib(2)=1, fib(3)=2, fib(4)=3 and so on 

// that means formuala becomes  fib(n)= fib(n-1) + fib(n-2)


#include <iostream>
using namespace std;

int fib(int n){

    if(n==0)
    return 0;
    if(n==1)
    return 1;

    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN= fibNm1 + fibNm2;

    return fibN;
}

int main() {

    cout << fib(6);
}