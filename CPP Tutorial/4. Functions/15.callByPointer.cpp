#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y) {

    int temp  =  *x;
    *x = *y;
    *y = temp;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 20;
    int b = 10;

    swap(&a, &b);

    cout << "a = " << a << endl;
    cout << "b = "<< b << endl;
    
    return 0;
}