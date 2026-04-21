#include <bits/stdc++.h>
using namespace std;

void swap(int *x, int *y) {
    
    int temp = *x;
    *x = *y;
    *y = temp;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 10;
    int b = 20;

    cout << "Before Swapping :-" << endl;
    cout << "a = " << a << endl;
    cout << "b= " << b << endl; 
    swap(&a, &b);

    cout << "After Swapping :-" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}