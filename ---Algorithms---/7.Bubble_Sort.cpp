#include <iostream>
#include <algorithm>
using namespace std;

void BubbleSort(int arr[], int n){

    int i; int j;
    for(int i=0; i<n-1; i++) {   // run n times 
        for(int j = 0 ; j< n-i-1; j++) {        //run n * n times 
            if(arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);             // time complexity = O(n^2);
            }
        }
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int n=5;
    int arr[] = {4,1,5,2,3};

    BubbleSort(arr, n);
    printArray(arr,n);


    return 0;
}