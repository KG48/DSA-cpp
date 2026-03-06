#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {-4,-2,1,3,5};


    cout << "original matrix:- " << endl;
    for(auto i : nums) {
        cout << i << " ";
    }

    
     int prod[10];
    for(int i = 0; i< nums.size(); i++) {
        for(int j = i; j < nums.size(); j++) {
            prod[j]= nums[i]*nums[j];
        }
    }

    cout << endl;
    cout << "Squared Matrix :- " << endl;
    for(int  i  = 0; i< nums.size(); i++) {
        cout << prod[i] << " "; 
    }

    for(int i = 0; i < nums.size(); i++) {
        for(int j = 0; j < nums.size()-i-1; j++) {
            if(prod[j] > prod[j+1]) {
                swap(prod[j], prod[j+1]);
            }
        }
     }

     cout << endl;
     cout << "Sorted Sqr Matrix:- "<< endl;
     for(int i = 0; i < nums.size(); i++) {
        cout << prod[i] << " ";
     }

    
    return 0;
}