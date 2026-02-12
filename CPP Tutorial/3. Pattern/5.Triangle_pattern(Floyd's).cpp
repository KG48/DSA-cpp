#include <iostream>
using namespace std;

int main() {

    int i; int j;

    int num = 0;
    for(i=0;i<9;i++) {

        cout << endl;

        for(j=0;j<i+1;j++) {

            cout << num  << " ";
            num++;
        }
    }
    return 0;
}