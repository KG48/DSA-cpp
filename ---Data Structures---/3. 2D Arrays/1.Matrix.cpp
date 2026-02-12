#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int matrix[4][3] = {{1,2,3}, {3,4,5}, {1,9,3}, {6, 3, 1}};
    int rows=4;
    int cols=3;

    cout << matrix[0][0] << endl;
    cout << matrix[0][1] << endl;                     //accessing single element by indexing 
    cout << matrix[0][2] << endl;
    cout << matrix[1][0] << endl;
    cout << matrix[1][1] << endl;
    cout << matrix[1][2] << endl;
    cout << matrix[2][0] << endl;

    int sum = 0;
    for(int i=0; i < rows; i++) {
        
        cout << endl;
        for (int j=0; j< cols; j++) {                                       // printing complete matrix 

            cout << matrix[i][j] << " ";
            sum += matrix[i][j];                                               // sum of matrix elements 
        }
    }
    cout << "\nSum of Matrix Elements :- "<< sum;                       
    return 0;
}