#include <iostream>
using namespace std;

int main() {

    int i; int j;
    char ch = 'A';

    for(i=0;i<15;i++) {

        cout << endl;

        for(j=0;j<15;j++){
            cout<<ch<<" ";
            ch++;

            if(ch > 'Z'){
                ch = 'A';    //Extra part if want to print characters in loop (avoid special characters)
            }
        }
    }
    return 0;
}
