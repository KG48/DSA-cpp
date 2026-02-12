
// Sum of all odd numbers from 1 to N
 

#include <iostream>
using namespace std;

int main() {
    int n; 
    int i;

    cout << "Enter the N:- ";
    cin >> n;
    int sum=0;
    for(i=1; i<=n; i++) {

        if(i % 2 !=0) {
            sum += i;
        }
        
    }
    cout << "sum is - " << sum;

    return 0;
}