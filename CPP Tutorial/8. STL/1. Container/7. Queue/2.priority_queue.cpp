#include <iostream>
#include <queue>
using namespace std;

//priority queue- used max heap and min heap internally - complete binary tree
// max heap - largest element is the root 
// mean heap - smallest element is the root 
// we assume priority queue as a stack

int main() {

    priority_queue<int> q; // for decreasing order priority
    // priority_queue<int, vector<int>, greater<int>> q;

    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);

    cout << "Decreasing order Queue:- ";
    while(!q.empty()) {   
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
    
    
    priority_queue<int, vector<int>, greater<int>> s;   //for incresing order priority

    s.push(5);
    s.push(3);
    s.push(10);
    s.push(4);

    cout << "Increasing order Queue:- ";
    while(!s.empty()) {   
        cout << s.top() << " ";
        s.pop();
    }    

    cout << endl;

    //all other function are same 

    // push, emplace - time complexity = O(logn)
    // top = O(1)
    // pop = O(logn)
   return 0;
}