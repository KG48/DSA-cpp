#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// queue -  queue is FIFO ..insertion and deletion operation can perform at both end

int main() {

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()) {  //jbtk queue empty nahi ho jati tabtk
        cout << q.front() << " ";
        q.pop();
    } 
    cout << endl;

    //other functions are similar to stack 
    // time complexity
    // push-front- pop = O(1);
    return 0;
}