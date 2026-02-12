#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int size) {

    int sum=0;
    for(int i=0;i<size;i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int product(int arr[], int size) {

    int prod =1;
    for(int i=0; i<size;i++) {
        prod = prod * arr[i];
    }
    return prod;
}

int main() {

    int arr[] = {2,3,5};
    int size = 3;

    cout << "Addition :- " << sum(arr,3)<<endl;   
    cout << "Product :- " << product(arr,3);
    return 0;
}