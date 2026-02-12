#include <iostream>
using namespace std;

int main() {


    // Memory Address
    int a = 10;
    cout << "Memory Address :- " << &a << endl;

    // Pointer
    //  -- A special variables that stores the address of another variable

    int x = 10;
    int *ptr = &x;     // this is how we assign the address of varible to another varibale which is a special variable 
    
    cout << "Address of varible inside ptr :- "<< ptr << endl;
    cout << "Address of variable :- " << &x << endl;

    float price = 100.25;
    float *ptr2 = &price;

    cout << ptr2 << endl;
    cout << &price << endl;


    // Pointer to Pointer
    // stores the address of previous pointer 
    
    int m = 10;
    int *ptr1 = &m;
    int **ptrr2 = &ptr1;

    cout << "Pointer to Pointer :- " << endl;
    cout << &m << endl;
    cout << ptrr2 << endl;
    cout << &ptrr2 << endl;


    // * -- Dereference Operator -- value at address 

    cout <<"Value at Address &m :- "<< *(&m) << endl;
    cout <<"Value at address of &ptr1 :- "<< *(ptr1) << endl;;
    cout << "Value at address of ptrr2 :-"<< **(ptrr2);

    // NULL pointer -- A pointer that doesn't point to any location.

    int *ptrrr= NULL;

    cout << ptrrr << endl;

    return 0;
}