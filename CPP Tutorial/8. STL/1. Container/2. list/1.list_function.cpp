#include <iostream>
#include <vector>
#include <list>
using namespace std;

// list work as doubly linked list so we get front operations to do ..only difference between vector and list
/*
List Functions 
    1. push_back & push_front
    2. emplace_back & emplace_front
    3. pop_back & pop_front
*/
int main() {

    list<int> l;

    l.push_back(1);             // 1
    l.push_back(2);             // 1 2
    l.push_front(3);            // 3 1 2
    l.push_front(5);            // 5 3 1 2

    for(int i : l) {
        cout << i << " ";
    }
    cout << endl;
    
    l.pop_back();
    l.pop_front();

    for(int i : l) {
        cout << i << " ";
    }
    return 0;
}