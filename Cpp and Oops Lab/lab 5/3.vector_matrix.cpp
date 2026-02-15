#include <bits/stdc++.h>
using namespace std;

int Addition(vector<vector<int>> & mat, int rows, int cols) {

    int sum = 0;
    for(int i = 0; i < rows; i++) {
        for (int j = 0; j <cols; j++) {
            sum += mat[i][j];
        }
    }
    return sum;

}
int multiplication(vector<vector<int>> & mat, int rows, int cols) {

    int mul = 1;
    for(int i = 0; i < rows; i++) {
        for (int j = 0; j <cols; j++) {
            mul *= mat[i][j];
        }
    }
    return mul;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int rows;
    int cols;

    cout << "Enter the number of rows :- " << flush;
    cin >> rows;
    
    cout << "Enter the Number of cols :- " << flush;
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter Matrix Elemetns :- \n";

    for(int i = 0; i< rows; i++){
        for(int j = 0; j< cols ; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matrix is :- ";

    for(int i = 0; i < rows; i++) {
        cout << endl;
        for (int j = 0; j <cols; j++) {
            cout << matrix[i][j] << " ";
        }
    }

    cout <<  "\n Addition :- "<< Addition(matrix, rows, cols) << endl;
    cout << " Multiplication :- " << multiplication(matrix, rows, cols) << endl;
    return 0;
}