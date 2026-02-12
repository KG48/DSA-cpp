#include <iostream>
#include <vector>
using namespace std;

// pairs - they are the part of cpp utility library
// we can store any two values of same or different data type in a sigle array  
int main() {

    pair<int, int> p = {3, 5};  // same data type
    cout << "same data type :- " << endl;

    cout << p.first << endl;
    cout << p.second << endl;

    cout << endl;

    pair<string, int> k = {"Karan", 10};  // diff data type
    cout << "diff data type :- " << endl;

    cout << k.first << endl;
    cout << k.second << endl;

    cout << endl;
    // pair of pairs 
    cout << "pair of pairs :- " << endl;

    pair<int, pair<char, int>> s = {1, {'k', 3}};

    cout << s.first << endl;
    cout << s.second.first << endl;
    cout << s.second.second << endl;

    cout << endl;
    // vector of pair 
    cout << "vector of pair :- " << endl;

    vector<pair<int, int>> vec = {{1,2}, {2,3}, {3, 4}};

    vec.push_back({4, 5});
    vec.emplace_back(5, 6);

    for(pair<int, int> x : vec) {
        cout << x.first << " " << x.second << endl;
    }

    cout << endl;
    //print : best practices
    for(const auto m : vec) {
        cout << m.first << " " << m.second << endl;
    }
    return 0;
}