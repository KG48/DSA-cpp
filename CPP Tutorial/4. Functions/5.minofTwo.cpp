#include <iostream>
using namespace std;

int minOfTwo(int a, int b){   // here a (int a) and (int b) are parameters 

    if(a > b){
        return b;
    }else {
        return a;
    }
}

int main() {

    cout << "Minimum is : " << minOfTwo(100,20);                // here 100 and 20 are arguments
    
    return 0;
}