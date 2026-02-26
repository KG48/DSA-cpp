#include <bits/stdc++.h>
using namespace std;


int FindSteps(string s) {

    int steps = 0;

    while(s != "1") {
        if(s.back() == '0') {
            s.pop_back();      //Even = Divide by 2
        
    }else {
        int i = s.size() - 1;   // Odd = add 1 

        while(i >= 0 && s[i] == '1') {
            s[i] = '0';
            i--;
        }

        if(i >= 0) {
            s[i] = '1';
        }else{
            s = "1" + s;
        }
    }
    steps++;
    }
 return steps;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s  = "1011";

    cout << FindSteps(s);
    


    
    return 0;
}