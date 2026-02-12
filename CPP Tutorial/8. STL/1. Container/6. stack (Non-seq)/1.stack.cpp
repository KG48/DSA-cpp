#include <iostream>
#include <stack>
using namespace std;

// Stack :- stack if lifo - last in first out 
//elements can add from top and remove only 
int main() {

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    
    stack<int> s2;

    s2.swap(s);

    
    cout << "s size :- " << s.size() << endl;
    cout << "s2 size :- " << s2.size()  << endl;

    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    s.push(9);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    cout << "s size :- " << s.size() << endl;
    cout << "s2 size :- " << s2.size()  << endl;

    // time complexity :- 
    // push - top - pop has same time complexity = O(1);
    return 0;
}