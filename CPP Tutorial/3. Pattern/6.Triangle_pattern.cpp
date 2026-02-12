#include <iostream>
using namespace std;

int main() {

    int i; int j;
    int n=10;

    char ch = 'A';

    for(i=0;i<n;i++) {

         cout << endl;

        for (j=0;j<i+1;j++) {

            cout << char(ch + i) << " ";
        
        }
    }
    return 0;
}