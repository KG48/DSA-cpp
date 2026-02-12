// Array :- Array is data structure used to store the multiple elements of same data type in contigous memory location.
//it is linear data structure 


#include <bits/stdc++.h>
using namespace std;

int main() {

    int marks[5]={90,80,97,45,60};

    cout << "elements are printed using by indexing :-\n";
    cout << marks[0] <<endl;
    cout << marks[1] <<endl;
    cout << marks[2] <<endl;
    cout << marks[3] <<endl;
    cout << marks[4] <<endl;
    cout << "Size of this Array:-" << sizeof(marks) <<endl;

    
    cout << "elements are printed using for loop :-\n";
    int ages[10]={20,50,67,23,53,87,45,10,49,91};

    cout << "Size of this Array:-" << sizeof(ages) <<endl;
    for(int i=0;i<10;i++) {
        cout << ages[i]<<endl;
    }
    

    return 0;
}