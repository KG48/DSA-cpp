#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

//sorting
int main() {

    int arr[5] = { 5, 3, -1, 10, 100};       // Array
    
    cout << "Unsorted Array :- ";
    for(int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    sort(arr, arr+5);

    cout << "Sorted Array :- ";
    for(int val : arr) {
        cout << val << " "; 
    }
    cout << endl;
    

    vector<int> k = { 2, 9, -1, 30, 12};     // Vector

    cout << "Unsorted Vector :- ";
    for(int x : k){
        cout << x << " ";
    }
    cout << endl;

    sort(k.begin(), k.end());

    cout << "Sorted Vector :- ";
    for(int x : k) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}