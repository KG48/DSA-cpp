#include <bits/stdc++.h>
using namespace std;

void uniqueNums(int arr[], int size) {


    int i; int j;

    for(i=0;i<size;i++) {
        int count =0;
        
        for(j=0;j<size;j++) {
            if(arr[i]==arr[j]) {
                count ++;
            }
        }
        if(count == 1) {
            cout << arr[i] << " ";
        }
    }
}

int main() {

    int size=10;
    int arr[]={1,1,2,2,3,4,4,5,5,8};
    
    uniqueNums(arr,10);

    return 0;
}