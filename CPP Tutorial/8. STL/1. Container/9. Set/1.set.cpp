#include <iostream>
#include <set>
using namespace std;


int main() {

    set<int> s;
    
    s.insert(1);
    s.insert(32);
    s.insert(2);
    s.insert(9);
    s.insert(10);

    //values get stored uniquely if we try to store same value set will only stored once

    s.insert(2);
    cout << "size :- "<<  s.size() << endl;
    for(auto val : s) {
        cout << val << " ";
    }
    cout << endl;

    //functions to be perform on set

    cout << "Lower Bound :- " << *(s.lower_bound(4));   // lower bound return the iterator of given value or if 
                                        // value is not available then return iterator of value just greater than it 
      
    
    // same we can done multi set and unordred set as we done for maps 


    return 0;
}