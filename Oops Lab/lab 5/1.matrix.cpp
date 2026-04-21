#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int rows;
    int cols;

    cout << "Enter the number of rows :- " << flush;
    cin >> rows;
    cout << "Enter the number of colums :- "<< flush;
    cin >> cols;
    int matrix[rows][cols];

    cout << "Enter the Elements Of matrix :- " << flush;
    for(int i = 0; i< rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix :- "<< flush;
     for(int i = 0; i< rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
    }
    
    return 0;
}