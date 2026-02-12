#include <iostream>
#include <string>  // is for std :: string, not for strlen
#include <cstring> // is for strlen
using namespace std;

  
int main() {

    char str[] = {'a', 'b', 'c'};  //without '\0'=(null character), given string in not valid and proper C-string

    cout << str << endl;   // constant pointers 
    cout << "Length of Above string :- " << strlen(str) << endl;

    char strr[] = {'a', 'b', 'c', '\0'};

    cout << strr << endl;
    cout << "Length of Above string :- " << strlen(strr) << endl;
    
    char str1[] = "hello"; // string literals   ...literals means value will not change 

    cout<< str1 << endl;
    cout << "Value at index 2:- " << str1[2] << endl;
    cout << "Length of hello string :- " << strlen(str1) << endl;

    return 0;
}