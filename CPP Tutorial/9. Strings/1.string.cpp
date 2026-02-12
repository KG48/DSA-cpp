#include <iostream>
#include <string>
using namespace std;

// string :- any word, phrase, or sentence enclosed in double quotes
// string is dynamic in nature => resizes at runtime
// we cannot change char array on run time 
// contigous in nature 
int main() {

    string str = "Karan Gavhane";   // string is a class, str is an object

    cout << str << endl;
    cout << "size of " << str << " is :- " << str.length() << endl;

    str = "hello";
    cout << str << endl;
    cout << "size is :- " << str.size() << endl;

    // combine two strings 

    string str1 = "Karan";
    string str2 = "Gavhane";

    string str3 = str1 + str2;

    cout << str3 << endl;
    cout << "Size of first string :- " << str1.size() << endl;
    cout << "Size of 2nd string :- "<< str2.length() << endl;
    cout << "Size after combining both string :- "<< str3.size() << endl;

    // to check that both strings size are equal or not and also greater than, less than
    cout << (str1 == str2) << endl;

    string strK;

    cin >> strK;

    cout << "Output :- " << strK << endl;
    
    return 0;
}
