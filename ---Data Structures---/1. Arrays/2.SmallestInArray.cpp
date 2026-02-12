#include <bits/stdc++.h>
using namespace std;

int main() {

    int n=6;
    int arr[n]= {5, 15, 22, 1, -15, 24};

    int smallest = INT_MAX; 
    int largest = INT_MIN;            //INT_MAX is +infinity  and INT_MIN is -infinity
    for(int i=0; i<n;i++) {
        if(arr[i] < smallest) {         /// Or instead of this logic we have already difine min/max function ..so
            smallest = arr[i];          /// smallest = min(arr[i], smallest);
            
        }
        largest = max(arr[i] , largest);
    }

    cout << "smallest = " << smallest << endl;
    cout << "largest  = " << largest << endl;
 
    return 0;
}