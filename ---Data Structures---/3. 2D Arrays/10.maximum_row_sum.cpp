#include <bits/stdc++.h>
using namespace std;

int MaximumRowSum(int matrix[][4], int rows, int cols) {

    int maxRowSum=INT_MIN;
    

    for(int i=0; i<rows; i++){   //for each row
        int currSum = 0;            //reset currSum
        for(int j=0; j<cols; j++) {         //for each column
            currSum += matrix[i][j];            // add elemets to currSum
        }
        maxRowSum=max(maxRowSum, currSum);    //compare currSum with maxRowSum
    }

    
    return maxRowSum;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int matrix[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int rows = 4;
    int cols = 4;

    cout << MaximumRowSum(matrix, rows, cols);
    return 0;
}