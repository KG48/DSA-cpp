#include <bits/stdc++.h>
using namespace std;

int calculate(string &s, int &i) {

    stack<int> st;

    int num = 0;
    char op = '+';

    for(; i < s.size(); i++) {
        if(isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
        }

        if(s[i] == '(') {
            i++;
            num = calculate(s, i);
        }
        if((!isdigit(s[i]) && s[i] != ' ') || i == s.size()-1) {
        
            if(op == '+') st.push(num);
            else if(op == '-') st.push(-num);
            else if(op == '*'){
                int top = st.top(); 
                st.pop();
                st.push(top * num);
            }
            else if(op == '/'){
                int top = st.top(); st.pop();
                st.push(top / num);
            }
            
            op = s[i];
            num = 0;
    }

    if(s[i] == ')') break;
    }

    int result = 0;
    while(!st.empty()) {
        result += st.top();
        st.pop();
    }
    return result;  

    
}
int calculate(string s) {
    int i = 0;
    return calculate(s, i);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s = " 12 + 5 - (3 * 2)";

    cout << calculate(s);
    
    return 0;
}