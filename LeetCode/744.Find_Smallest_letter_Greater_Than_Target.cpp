#include <iostream>
#include <vector>
#include <string>
using namespace std;

char Karan(vector<char> & letters, char target) {

    letters.push_back(target);

    for(char ch : letters) {
        cout << ch << " ";
    }
    cout << endl;

    return target;

}

int main() {

    vector <char> letters = {'c', 'f', 'j'};

    char target = 'z';

    char result = Karan(letters, target);
    // cout << result << endl;
    return 0;

}