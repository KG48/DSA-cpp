#include <bits/stdc++.h>
using namespace std;

void addition(int A[][100], int B[][100], int result[][100], int r, int c) {

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            result[i][j] = A[i][j] + B[i][j];
}

void multiplication(int A[][100], int B[][100], int result[][100],
                    int r1, int c1, int c2) {

    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++) {

            result[i][j] = 0;

            for(int k=0;k<c1;k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {

    int r1,c1,r2,c2;

    cout<<"Enter number of rows for Matrix A:- ";
    cin>>r1;
    cout << "Enter number of columns for Matrix A:- ";
    cin >>c1;

    int A[100][100];

    cout<<"Enter Matrix A :- \n";
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            cin>>A[i][j];

    cout<<"Enter number of rows for matrix B:- " ;
    cin >> r2;
    cout << "Enter number of columns for matrix B:- ";
    cin>>c2;

    int B[100][100];

    cout<<"Enter Matrix B :- \n";
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            cin>>B[i][j];

    // ADDITION
    if(r1==r2 && c1==c2) {

        int add[100][100];

        addition(A,B,add,r1,c1);

        cout<<"Addition Result :- \n";
        for(int i=0;i<r1;i++) {
            for(int j=0;j<c1;j++)
                cout<<add[i][j]<<" ";
            cout<<endl;
        }
    }
    else
        cout<<"Addition not possible\n";

    // MULTIPLICATION
    if(c1==r2) {

        int prod[100][100];

        multiplication(A,B,prod,r1,c1,c2);

        cout<<"Multiplication Result :- \n";
        for(int i=0;i<r1;i++) {
            for(int j=0;j<c2;j++)
                cout<<prod[i][j]<<" ";
            cout<<endl;
        }
    }
    else
        cout<<"Multiplication not possible\n";

    return 0;
}
