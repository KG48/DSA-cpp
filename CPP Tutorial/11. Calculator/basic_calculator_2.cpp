#include <bits/stdc++.h>
using namespace std;

int calculate(string s) {

    stack<int> st;
    int result = 0;
    int num = 0;
    int sign = 1;

    for(int i = 0; i < s.size(); i++) {

        if(isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');
        }

        else if(s[i] == '+') {
            result += sign * num;
            num = 0;
            sign = 1;
        }

        else if(s[i] == '-') {
            result += sign * num;
            num = 0;
            sign = -1;
        }

        else if(s[i] == '(') {
            st.push(result);
            st.push(sign);
            result = 0;
            sign = 1;
        }

        else if(s[i] == ')') {
            result += sign * num;
            num = 0;

            result *= st.top();
            st.pop();

            result += st.top();
            st.pop();
        }
    }

    result += sign * num;
    return result;
}

int main() {

    string s = "(1+(4+5+2)-3)+(6+8)";
    cout << calculate(s);

    return 0;
}