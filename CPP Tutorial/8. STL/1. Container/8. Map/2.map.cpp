#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string, int> m;

    m.insert({"Camera", 80});
    m.emplace("Bat", 40);

    for(const auto p : m) {
        cout << p.first << " " << p.second <<endl;
    }

    m["cat"] = 20;
    m["apples"]= 30;
    m["bananas"]= 50;

    for(const auto s : m) {
        cout << s.first << " = " << s.second << endl;
    }



    return 0;
}