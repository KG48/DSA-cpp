#include <iostream>
using namespace std;

int main() {

    int i; int j;
    int n=10;

    for(i=0;i<n;i++) {  

        cout <<endl;

        for(j=0;j<i+1;j++) {
            cout << "*";
        }

        for(j=0;j<2*(n-2-i)+2;j++) {

            cout << " ";

         }
         for(j=0;j<i+1;j++){
            cout << "*";
         }
        
    }


    for(i=0;i<n;i++) {

        cout << endl;
    for(j=n-1;j>=i;j--) {

        cout << "*";
    }
    
     for(j=0;j<i*2;j++) {

        cout << " ";
     }
     cout << "*";

     for(j=n-2;j>=i;j--) {
        
        cout << "*";
     }
}
    return 0;
}