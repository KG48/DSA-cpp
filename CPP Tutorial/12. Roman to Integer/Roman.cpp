#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num) {
    vector<pair<int, string>> RomanLetters{{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"},  {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    string result;
    
    for(const auto &[value, symbol] : RomanLetters) {
        if(num == 0) break;

        while(num >= value) {

            result = result + symbol;
            num = num - value;
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num = 2354;

    cout << intToRoman(num);
    
    return 0;
}