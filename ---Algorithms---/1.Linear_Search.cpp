#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; int i;
    cout << "enter the size of the array :- ";
    cin >> n;

    int arr[n];

    for(i=0; i<n;i++){
        cout << "enter the value to store at index "<< i << ":- ";
        cin >> arr[i];
    }

    int search;
    cout << "Enter the element to search from the list ";
    cin >> search;

    for(i=0;i<n;i++) {
        if(search == arr[i]) {
            cout << "element " << search << " is found at location " << i + 1 <<endl;
            return 0;
        }
    }

    if(i==n) {
        cout << "element is not available in the list ";
    }

    return 0;
}