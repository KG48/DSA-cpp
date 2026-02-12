#include <iostream>
using namespace std;

int main() {

    int i; int j;
    int n=4;

    for(i=0;i<n;i++) {

        cout <<endl;

        //this loop is created for spaces 
        for(j=0;j<n-i-1;j++){

            cout << " ";
            
        }
        //this loop is created for num1 
        for(j=1;j<=i+1;j++){

            cout << j ;
        }
        //this loop is created for num2
        for(j=i;j>=1;j--){

            cout << j ;
        }
    }

    return 0;
}