#include <bits/stdc++.h>
using namespace std;

int LuckyInteger(vector<int> & arr) {

    unordered_map<int, int> freq;

    // count the frequency of integer
    for(int i : arr) {
        freq[i]++;
    }

    int ans = -1;
    // find lucky integer
    for(auto i : freq) {
        if(i.first == i.second) {
            ans = max(ans, i.first);
        }
    }
    return ans;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr = {1,2,2,3,3,3};

    cout << "Lucky Integer :- " << LuckyInteger(arr);
    
    return 0;
}