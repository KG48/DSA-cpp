//Data Type Modifiers

// changes the meaning of data types 

// Following are the the data type modifiers
/*
    1. long
        -- long int , long double ....long gives >=4 Bytes memory
    2. short
        -- short int , gives 2 bytes
    3. long long
        -- long long int, 8 bytes
    4. signed
        -- generally int, double or float they are signed data type modifiers..
        -- signed int means it can store positive integer and negative integer
    5. unsigned
        -- in some cases we dont want to assign negative values there where we used usigned int;
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << sizeof(int) <<endl;
    cout << sizeof(long int) <<endl;
    cout << sizeof(short int) <<endl;
    cout << sizeof(long long int) << endl;

    unsigned int x = -10;

    cout << x ;

    return 0;
}