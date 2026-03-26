 #include <bits/stdc++.h>
    using namespace std;

    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        //frequency map to store present elements while summing
        unordered_map<int, int> freq;

        //total sum 
        int totalSum = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                totalSum += grid[i][j];
                freq[grid[i][j]]++;  // store freq of all elements
            }
        }

        // horizontal cut
        unordered_map<int, int> topfreq;

        int topSum = 0;
        for(int i = 0; i < n - 1; i++) {
            for(int j = 0; j < m; j++) {
                topSum += grid[i][j];
                topfreq[grid[i][j]]++;  // calculate freq of top section element

                freq[grid[i][j]]--; // remove from bottom section
            }
            long long bottomSum = totalSum - topSum;

            // case 1. if already equal
            if(topSum == bottomSum) {
                return true;
            }

            // calucate diff 
            long long diff = abs(topSum - bottomSum);
            
            // case 2: discount one element
            if(topSum > bottomSum) {
                // remove element from top
                if(topfreq.count(diff) && topfreq[diff] > 0) {
                    return true;
                }
            } else {
                // remove element from bottom
                if(freq.count(diff) && freq[diff] > 0) {
                    return true;
                }
            }
        }

        // vertical cut
        long long leftSum = 0;
        unordered_map<int, int> leftfreq;

        // again build freq for full grid
        freq.clear();
        for(int i = 0; i < n; i++) {
            for(int j =0; j < m; j++) {
                freq[grid[i][j]]++;
            }
        }

        for(int i = 0; i < m-1; i++) {
            for(int j = 0; j < n; j++) {
                leftSum += grid[j][i];
                leftfreq[grid[j][i]]++;

                freq[grid[j][i]]--;  // remove from right side
            }
            
            long long rightSum = totalSum - leftSum;

            //case 1. already equal 
            if(leftSum == rightSum) {
                return true;
            }

            long long diff = abs(leftSum - rightSum);

            // case 2. remove one element
            if(leftSum > rightSum) {
                // remove element from leftSection
                if(leftfreq.count(diff) && leftfreq[diff] > 0){
                    return true;
                }
            } else {
                //remove from right
                if(freq.count(diff) && freq[diff] > 0) {
                    return true;
                }
            }
        }

        return false;
    }

   
    
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
    
        vector<vector<int>> grid = {{1,2}, {1,2}};

        cout << canPartitionGrid(grid);
        return 0;
    }