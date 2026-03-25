#include <bits/stdc++.h>
using namespace std;


bool CheckPartition(vector<vector<int>> & grid) {

    int n = grid.size();
    int m = grid[0].size();
    
    int total = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            total += grid[i][j];
        }
    }

    // horizontal cuts

    int topSum = 0;
    for(int i = 0; i < n -1; i++) {
        for(int j = 0; j < m; j++) {
            topSum += grid[i][j];
        }
        if(topSum == total - topSum) {
            return true;
        }
    }

    //  vertical cuts

    int leftSum = 0;
    for(int j = 0; j < m - 1; j++) {
        for(int i = 0; i < n; i++) {
            leftSum += grid[j][i];
        }
        if(leftSum == total - leftSum) {
            return true;
        }
        return false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> grid = {{1,4}, {2,3}};

    
    cout  << CheckPartition(grid);

    return 0;
}