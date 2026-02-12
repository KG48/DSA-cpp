#include <iostream>
#include <vector>
#include <deque>
using namespace std;

//   Deque : Double Ended Queue(similar to list)
// diff between deque and list is we can have random access in deque but we cannot have random access in list

int main() {

    deque<int> d = {1, 2, 3};

    d.push_back(5);
    d.push_back(2);
    d.push_front(9);
    d.push_front(10);

    for(int i : d) {
        cout << i << " ";
    }
    cout << endl;

    cout << d[2] << endl;   //random access
    return 0;
}