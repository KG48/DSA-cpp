#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>> & grid) {

    vector<int> ans;
    unordered_set<int> s;
    int n = grid.size();
    int a, b;

    int expSum = 0;
    int actualSum = 0;
    //find repeating values 
    for(int i = 0; i<n ; i++) {
        for(int j = 0; j < n; j++) {
            actualSum += grid[i][j];

            if(s.find(grid[i][j]) != s.end()){
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    // find missing value
    expSum = (n*n)*(n*n + 1)/2;
    b = expSum + a - actualSum;
    ans.push_back(b);

    return ans;
} 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    vector<vector<int>> grid = {{1,3}, {2,2}};

    vector<int> result = findMissingAndRepeatedValues(grid);

    for(auto val : result) {
        cout << val << "\n";
    }
    
    return 0;
}