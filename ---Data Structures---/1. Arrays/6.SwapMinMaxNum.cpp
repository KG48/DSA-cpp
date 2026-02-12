#include <bits/stdc++.h>
using namespace std;

void swapMinMax(int arr[], int n) {
    int minIndex = 0;
    int maxIndex = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[minIndex])
            minIndex = i;

        if(arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    swap(arr[minIndex], arr[maxIndex]);
}

int main() {
    int arr[6] = {23, -24, 46, 10, 12, 90};

    swapMinMax(arr, 6);

    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
