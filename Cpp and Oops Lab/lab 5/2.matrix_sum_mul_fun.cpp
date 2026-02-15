#include <bits/stdc++.h>
using namespace std;

int addition(int matrix[][100], int rows, int cols) {

    int sum = 0;
     for(int i = 0; i< rows; i++) {
        for(int j = 0; j< cols; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int multiplication(int matrix[][100], int rows, int cols) {

    int mul = 1;
     for(int i = 0; i< rows; i++) {
        for(int j = 0; j< cols; j++) {
            mul *= matrix[i][j];
        }
    }
    return mul;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int rows;
    int cols;
    cout << "Enter the Number of rows :- " << flush;
    cin >> rows;
    cout << "Enter the Number of colums :-" << flush;
    cin >> cols;

    int matrix[100][100];
    cout << "Enter Matrix Elements :- " << endl;
    for(int i = 0; i< rows; i++) {
        for(int j = 0; j< cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Addition of Matrix Elements :- " << addition(matrix, rows, cols) << endl;
    cout << "Multilication of Matrix Elements :- " << multiplication(matrix, rows, cols) << endl;
    return 0;
}