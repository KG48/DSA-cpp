#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

// we cannot have dublicate keys in unordered map 

int main() {

    unordered_map<string, int> m;

    m.emplace("tv", 100);
    m.emplace("laptop", 20); // this will be not in lexicographical order 
    m.emplace("Fridge", 120);
    m.emplace("watch", 200);

    for(auto p: m) {
        cout << p.first << " = " << p.second << endl;
    }


    /*
                Time Complexity :- 
                
            Multi Map :- 

            Map :-  insert    // O(logn)
                    erase 
                    count 
 
            unordered Map :- insert    // O(1)
                                        // O(n) very rare
                             erase 
                             count 
    */

    return 0;
}