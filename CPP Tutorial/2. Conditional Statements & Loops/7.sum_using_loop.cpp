
// Sum of Numbers from 1 to n


#include<iostream>
using namespace std;

int main() {

    int n, i;
    cout<<"enter number to add till :- ";
    cin >> n;

    int sum = 0;
    for(i=1; i<=n; i++) {
        sum += i;
    }
    cout << "sum is:- " <<sum;
}