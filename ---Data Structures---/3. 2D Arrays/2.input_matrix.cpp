#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

 
    int matrix[4][3];

    for(int i = 0; i < 4; i++) {
        
        // cout << endl;
        for(int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\n Matrix Printing :- " << endl;
    for(int i = 0; i < 4; i++) {
        
        cout << endl;
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
    }
    return 0;
}