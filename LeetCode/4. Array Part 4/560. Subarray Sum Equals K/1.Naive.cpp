#include <bits/stdc++.h>
using namespace std;

int SubarrSumEqualsK(vector<int> & arr, int k) {

    int n = arr.size();
    int count = 0;

    for(int i = 0; i< n; i++) { 
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += arr[j];

            if(sum == k) {
                count++;
            }
        }
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