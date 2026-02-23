#include <bits/stdc++.h>
using namespace std;


// pass by value :- nothing changes in the swapping just ..copies get changed

void swap(int x, int y) {

    int temp=x;
    x = y;
    y = temp;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 24;
    int b = 10;

    swap(a,b);
    cout  << "x :- "<< a << endl;
    cout << "y :- "<< b << endl;
    
    return 0;
}