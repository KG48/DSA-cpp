#include <bits/stdc++.h>
using namespace std;



class binary {
    string s;
    public:
        void read(void);
        void chk_bin(void);
};

void binary :: read(void){
    cout << "Enter a Binary Number" << endl;
    cin >> s;
}

void binary :: chk_bin(void) {
    for(int i = 0; i < s.length(); i++) {
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout << "Incorrect binary Format" << endl;
            exit(0);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    binary b;
    b.read();
    b.chk_bin();
    
    return 0;
}