#include <bits/stdc++.h>
using namespace std;

// Time Complexity for recursion

int factorial(int n) {

    if(n==0) {
        return 1;
    }

    return n * factorial(n-1);
}

//time complexity :- method 1. find timecomplexity by using recurence relation = f(n) = K + f(n-1);  so TC is O(n);
// method 2 :-  TC =  total Nummber of recursion calls * work done in each calls = TC = O(n * k) = O(n)


// space complexity :- 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    return 0;
}