#include <bits/stdc++.h>
using namespace std;

bool LinearSearch(int mat[][3], int rows, int cols, int key) {
    
    for(int i = 0; i< rows; i++) {
        for(int j = 0; j< cols; j++) {
            if(mat[i][j]== key) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    int rows = 4;
    int cols = 3;

    cout << LinearSearch(matrix, rows,cols, 8) << endl; 
    
    return 0;
}