#include <iostream>
#include <map>
using namespace std;

//  map syntax = map(key type, value)
int main() {

    map<string, int> m;

    //m[key] = value;   // insert, change

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["apple"] = 100;
    m["Ball"] = 10;

    //functions to be performed on map
    m.insert({"camera", 25});
    m.emplace("car", 38);

    cout << "count = " << m.count("laptop") << endl; // return the number of keys available
    cout << "count = " << m["laptop"] << endl; //this gives the value count of particular string

    m.erase("tv");

    if(m.find("camera") != m.end()) {
        cout << "Found\n";
    }else {
        cout << "Not Found\n";
    }

    //printing all map values 
    for(auto p: m) {
        cout << p.first << " " << p.second << endl;
    }

    //Note.  values will be printed in lexocographic order..mean alphatical order 
    // priority captical letter > small letters 

    

    
    return 0;
}