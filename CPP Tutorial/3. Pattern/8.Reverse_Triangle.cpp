#include <iostream>
using namespace std;

int main() {

    int i; int j;

    for(i=0;i<5;i++) {

        cout << endl;
        for(j=i+1;j>=1;j--){    //Reverse loop

            cout << j << " ";
        }
    }
        
        return 0;
}