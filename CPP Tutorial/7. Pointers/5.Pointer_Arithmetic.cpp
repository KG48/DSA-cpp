#include<iostream>
using namespace std;


// Pointer Arithmetic

//1 .  Increment(++)/ Decrement(--)

int main() {

    int a = 10;
    int *ptr = &a;
    cout << ptr << endl;
    ptr ++;             // increase address of that pointer variable by given data type
    cout << ptr << endl;
    ptr --;
    cout << ptr << endl;
    ptr --;             // Decrease address of that pointer variable by given data type 
    cout << ptr << endl; 


    cout << "New Input "<< endl;
    int b = 10;

    int *ptrr = &b;
    
    cout << "Before :- " << ptrr << endl;
    ptrr = ptrr + 2;  // 2int = 8 bytes memore added
    cout << "After :- " << ptrr << endl;
    


    cout <<  "Subtract Ptr" << endl;
    //Subtract ptr 
    //---- we can subtract two pointer if they have same data type but we cant add two pointer
    //---- by subtracting we get ans number of blocks of type(int)

    int *ptr2;                      // for eg ptr2 = 100
    int *ptr1 = ptr2 + 2;           // then ptr1 = 108    (2 int = 8 bytes )

    cout <<"Sutraction of two pointer :- " <<  ptr1 - ptr2 << endl;

    // we can also compare two pointer by using relational operators 

    return 0;
}