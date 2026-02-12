// Maximum Subarray Printing

#include <iostream>
using namespace std;

int main() {

    int n = 6;
    int arr[n] = {2, 3, 4, 5, 6, 7};
    
    int sum=0;

    for(int st=0;st<n;st++) {

        for(int end=st; end < n; end++) {

            for(int i=st; i < end; i++) {

                cout << arr[i];

            }
            cout << " ";
         }
         cout << endl;
    }

    return 0;
}