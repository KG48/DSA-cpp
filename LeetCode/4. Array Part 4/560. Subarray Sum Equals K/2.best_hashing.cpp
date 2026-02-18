// Prefix Sum if the Approach for this problem 
#include <bits/stdc++.h>
using namespace std;

int SubarrSumEqualsK(vector<int> arr, int k) {

    int n = arr.size();
    int count = 0;
    vector<int> prefixSum(n, 0);

    prefixSum[0] = arr[0];

    for(int i=1; i<n; i++) {
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    unordered_map<int, int> m;   // ps and freq
    for(int j = 0; j<n; j++) {
        if(prefixSum[j] == k) {
            count++;
        }
        int val = prefixSum[j] - k;
        if(m.find(val) != m.end()) {
            count += m[val];
        }

        if(m.find(prefixSum[j]) == m.end()) {
            m[prefixSum[j]] = 0;
        }
        m[prefixSum[j]]++;
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr = {9, 4, 20, 3, 10, 5};
    int k = 33;
    int result = SubarrSumEqualsK(arr, k);

    cout << result;
    
    return 0;
}