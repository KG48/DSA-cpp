#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {

    char str[] = {'a', 'b', 'c', '\0'};

    int st = 0; int end = strlen(str) - 1;

    while(st < end) {
        swap(str[st], str[end]);
        st++;
        end--;
    }
    cout << str << endl;

    return 0;
}