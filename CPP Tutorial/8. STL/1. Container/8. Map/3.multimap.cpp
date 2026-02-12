// multi map - we can store multiple or dublicate keys

#include <iostream>
#include <map>
using namespace std;

int main() {

    multimap<string, int> m;
    
    m.emplace("tv", 100);
    m.emplace("camera", 20);
    m.emplace("bat", 30);
    m.emplace("zebra", 40);
    m.emplace("moon", 101);

    m.erase("tv");

    for(const auto k: m) {
        cout << k.first << " = " << k.second << endl;
    }

    //now what is difference between map and multimap
    // lets see
    cout << endl;
    cout << "Using Map :- " << endl;

    map<string, int> n;

    n.emplace("tv", 100);
    n.emplace("tv", 100);
    n.emplace("tv", 100);           // tv will get printed only one time 
    n.emplace("tv", 100);
    n.emplace("tv", 100);

    for(auto p: n) {
        cout << p.first << " = " << p.second << endl;
    }

    cout << endl;
    cout << "Using Multi Map :- " << endl;

    multimap<string, int> s;

    s.emplace("tv", 100);
    s.emplace("tv", 100);
    s.emplace("tv", 100);           // tv will get printed number of times
    s.emplace("tv", 100);
    s.emplace("tv", 100);
    s.emplace("karan", 1);

    for(auto p: s) {
        cout << p.first << " = " << p.second << endl;
    }

    s.erase("tv");                  // this removes all keys related to tv 
    cout << "After Removing tv :- " << endl;
    for(auto p: s) {
        cout << p.first << " = " << p.second << endl;
    }

    // to remove only one key 

    multimap<string, int> r;

    r.emplace("tv", 100);
    r.emplace("tv", 100);
    r.emplace("tv", 100);           // only one key will get deleted 
    r.emplace("tv", 100);
    r.emplace("tv", 100);
    r.emplace("karan", 1);
    r.erase(r.find("tv"));
    cout << "After Removing tv :- " << endl;
    for(auto p: r) {
        cout << p.first << " = " << p.second << endl;
    }
    return 0;
}