#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 10;
    int *ptr = &a;
    cout << *ptr  << endl;
    
    // new keyword = dynamic memorry allocation

    int *ptrr = new int(10);
    cout << *(ptrr);

    // block of memory

    int *arr = new int[4];
    arr[0] = 20;
    arr[1] = 30;
    arr[2] = 10;
    arr[3] = 40;

    cout << arr[0];
    cout << arr[1];
    cout << arr[2];
    cout << arr[3];
    cout << arr[4];
    return 0;
}