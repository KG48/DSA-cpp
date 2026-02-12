#include <iostream>
using namespace std;


//Top structure
    /*
                       *    
                    *     *
                  *         *
                *             *
    
    //Bottom structure

                *             *
                  *         *
                    *     *
                       *
    */




int main() {

    int i; int j;
    int n=4;

    //For top structure

    for(i=0;i<n;i++){

        cout << endl;
        
        //spaces 
        for(j=0;j<n-i-1;j++) {

            cout << " " ;
            
        }
        cout << "*";
        //spaces
        for(j=0;j<2*i-1;j++) {

            cout << " ";
        }
        if(i!=0) {
                cout << "*";
            }

        
    }
    

    //for bottom structure

    for(i=0;i<n-1;i++) {

        cout <<endl;
        //spaces 
        for(j=0;j<i+1;j++) {

            cout << " ";
        }
        cout << "*";

        if(i != n-2) {
        for(j=0; j<2*(n-i)-5;j++) {

            cout << " ";
        }
        cout << "*";
    }
}

    return 0;
}