// Vectors :- it is dynamic array which has no fixed size provided by STL(Standard Library Template)
//            after implementation we can increase the size of vector dyanamically in the memory

#include <bits/stdc++.h>    // #include <iostream>  #include <vector>
using namespace std;

int main() {

    // Vector Syntax 
    // types of declaration 

    //1.
    vector<int> vec;    //vec is variable name    //size = 0;
    
    //2.
    vector<int> vecc = {1,2,3};

    cout << vecc[0] << endl;

    //3.
    vector<int> veccc(3,0);    // here 3 is the size of vector and 0 is values assign in vector

    cout << veccc[0] << endl;
    cout << veccc[1] << endl;
    cout << veccc[2] << endl;
   
    return 0;
}