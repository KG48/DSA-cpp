#include <iostream>
#include <algorithm>
using namespace std;

void SelectionSort(int arr[], int n) {

    for(int i=0; i<n-1; i++) {
        int smallesIDX = i;
        for(int j = i + 1; j< n; j++) {             // TIme Complexity = O(n^2)
            if(arr[j] < arr[smallesIDX]) {
                swap(arr[j], arr[smallesIDX]);
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

    int n = 5;
    int arr[] = {4, 1, 5, 3, 2};

    SelectionSort(arr, n);
    printArray(arr, n);

    return 0;
}