#include <iostream>
#include <tuple>
#include <string>
using namespace std;

int main() {

    tuple<int, int, char, int , string , int> m = {2, 3, 'k',7, "KARAN", 6};

    cout << get<0>(m) << endl; // random access 
    cout << get<4>(m);
    

    return 0;
}
