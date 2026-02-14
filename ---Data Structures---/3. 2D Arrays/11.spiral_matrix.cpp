#include <bits/stdc++.h>
using namespace std;

vector<int> SpiralMatrix(vector<vector<int>> & mat) {

    int m = mat.size();
    int n = mat[0].size();
    int s_row = 0; int s_col = 0;
    int e_row = m - 1; int e_col = n -1;
    vector<int> ans;

    //corner case = for odd matrix


    while(s_row <= e_row && s_col <= e_col) {
        // top
        for(int j = s_col; j<= e_col; j++) {
            ans.push_back(mat[s_row][j]);
        }

        //right
        for(int i = s_row + 1; i<=e_row; i++) {
            ans.push_back(mat[i][e_col]);
        }

        //bottom 
        for(int j = e_col -1; j>=s_col; j--) {
            if(s_row == e_row) {
                break;
            }
            ans.push_back(mat[e_row][j]);
        }

        //left
        for(int i=e_row-1; i>= s_row+1; i--) {
            if(s_col == e_col) {
                break;
            }
             ans.push_back(mat[i][s_col]);
        }

        s_row++; e_row--; s_col++; e_col--;
    }
    return ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    vector<int> result =  SpiralMatrix(matrix);
    for(int x : result) {
        cout << x << " ";
    }
    return 0;
}