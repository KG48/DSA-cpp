#include <bits/stdc++.h>
using namespace std;


bool BinarySearch(vector<vector<int>> &mat, int target) {

    int rows = mat.size();
    int cols = mat[0].size();

    int st = 0; int end = rows*cols - 1;
    while(st <= end) {

        int mid = st  + (end - st)/2;

        int r = mid / cols;
        int c = mid % cols;

        if(mat[r][c] == target) {
            return true;
        }else if(mat[r][c] < target ){
            st = mid + 1;
        }else {
            end = mid - 1;
        }
    }
    return false;
}

int matrixAddition(vector<vector<int>> &mat) {

    int rows=mat.size();
    int cols=mat[0].size();
    int sum = 0;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j< cols; j++) {
            sum += mat[i][j];
        }
    }
    return sum;
}

int matrixMultiplication(vector<vector<int>> &mat) {

    int rows=mat.size();
    int cols=mat[0].size();
    int mul = 1;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j< cols; j++) {
            mul *= mat[i][j];
        }
    }
    return mul;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    

    int rows,cols;
    cout << "Enter the Number of rows:- " << endl;
    cin >> rows;
    cout << "Enter the Number of cols :-"  << endl;
    cin >> cols;

    cout << "Enter Matrix :- " << endl;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for(int i =0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix :- " << endl;
    for(int i =0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    cout << endl;

    int target; 
    cout << "Enter Target Value :- " << endl;
    cin >> target;

    
    cout << "Output :- "<< BinarySearch(matrix, target) << endl;
    cout << "Matrix Sum :- " << matrixAddition(matrix) << endl;
    cout << "Matrix Multiplication :- " << matrixMultiplication(matrix);
    return 0;
}