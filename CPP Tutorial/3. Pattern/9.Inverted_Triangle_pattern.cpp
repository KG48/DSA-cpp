#include <iostream>
using namespace std;

// int main() {

//     int i; int j; 
//     int num=1;
//     int n =4;

//     for(i=0;i<n;i++) {

        
//         for(j=0;j<i;j++) {

//             cout << " ";
//         }
//             for(j=0;j<n-i;j++) {
//                 cout << (i+1);
//             }
            
        
//         cout <<endl;
//     }

//     return 0;
// }

int main() {

    int i; int j; 
    char ch='A';
    int n =4;

    for(i=0;i<n;i++) {

        
        for(j=0;j<i;j++) {

            cout << " ";
        }
            for(j=0;j<n-i;j++) {
                cout << char(ch+i);
            }
            
        
        cout <<endl;
    }

    return 0;
}