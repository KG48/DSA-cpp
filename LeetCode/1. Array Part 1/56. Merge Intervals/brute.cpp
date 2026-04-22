#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>  mergeIntervals(vector<vector<int>> &intervals) {

    vector<vector<int>>  ans;
    
    //sort
    sort(intervals.begin(), intervals.end());

    // start with first interval
    ans.push_back(intervals[0]);

    for(int i = 1; i < intervals.size(); i++) {
        //last interval in ans
        vector<int> & last = ans.back();

        // check overlapping
        if(intervals[i][0] <= last[1]) {
            // merge
            last[1] = max(last[1], intervals[i][1]);
        } else {
            //no overlap = push further 
            ans.push_back(intervals[i]);
        }
    }
    return ans;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> intervals = {{1,3}, {2, 6}, {8,10}, {15, 18}};

    vector<vector<int>> result = mergeIntervals(intervals);

    for(auto &p : result) {
        cout << p[0] << " " << p[1] << endl;
    }
    return 0;
}