#include <bits/stdc++.h>
using namespace std;

pair<int,int> LinearSearch(int mat[][4], int rows, int cols, int search) {

    for(int i=0; i< rows; i++) {
        for(int j=0; j< cols; j++) {
            if(search == mat[i][j]){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int matrix[3][4] = {{2,4,5,9}, {6,8,10,17},{2,9,10,20}};

    pair<int,int> result = LinearSearch(matrix, 3,4, 6);
    if(result.first != -1) {
        cout << "Found At Row = " << result.first << " & Found At column = " << result.second << endl;
    }else {
        cout << "Element Not Found" << endl;
    }
    return 0;
}