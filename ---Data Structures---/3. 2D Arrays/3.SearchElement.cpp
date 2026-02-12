#include <bits/stdc++.h>
using namespace std;

bool LinearSearch(int mat[][4], int rows, int cols, int search) {

    for(int i=0; i< rows; i++) {
        for(int j=0; j< cols; j++) {
            if(search == mat[i][j]){
                return true;
            }
        }
    }
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int matrix[3][4] = {{2,4,5,9}, {6,8,10,17},{2,9,10,20}};

    cout << LinearSearch(matrix, 3,4, 6) <<endl;
    return 0;
}