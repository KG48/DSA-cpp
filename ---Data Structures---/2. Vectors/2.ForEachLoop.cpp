#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vec(5,0);

    vector<int> vecc = {'a', 'b', 'c', 'd', 'e',};

    for(int i : vec){           // for each loop

        cout << i <<endl;
     }
    
    for(char i : vecc) {
        
        cout << i <<endl;
    }
    return 0;
}