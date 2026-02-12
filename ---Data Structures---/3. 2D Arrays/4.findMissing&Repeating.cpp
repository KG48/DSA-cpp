#include <bits/stdc++.h>
using namespace std;


vector<int> findMissingAndReapeatedValues(vector<vector<int>>& grid) {

    vector<int> ans;
    unordered_set<int> s;
    int n = grid.size();
    int a,b;

    int expSum = 0;
    int actualSum = 0;
    // find reapiting values
    for(int i =0; i<n; i++) {
        for(int j=0; j<n; j++) {
            actualSum += grid[i][j];

            if(s.find(grid[i][j]) != s.end()) {
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    expSum = (n * n) * (n*n + 1)/2;
    b = expSum + a - actualSum;
    ans.push_back(b);

    return ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> grid = {{9,1,7}, {8,9,2}, {3,4,6}};

   vector<int> result= findMissingAndReapeatedValues(grid);

   cout << "Repeated: " << result[0] << "\n";
cout << "Missing: " << result[1] << "\n";
    return 0;
}