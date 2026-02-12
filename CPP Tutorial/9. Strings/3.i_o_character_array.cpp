#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// input / output of character arrays 

int main() {

    char str[100];

    // input 
    cout << "enter first name :- ";
    cin >> str;

    cout << "Output :- " << str << endl;

    // store full string 

    char str1[100];

    cin.ignore();   //lefts all values before it 

    cout << "Enter full name :- " ;
    cin.getline(str, 100);    // this input statement stores full string 

    cout << "Output :- " << str << endl;

    //calculate length using loop  

    int len= 0;
    for(int i=0; i< str[i] != '\0'; i++) {
        len++;
    }

    cout << "length of string :- "<< len << endl;
    return 0;
}