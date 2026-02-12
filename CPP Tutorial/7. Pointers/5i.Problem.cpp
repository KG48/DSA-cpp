// predict output
#include <iostream>
using namespace std;

int main( ) {

    int arr[ ] =  {10, 20, 30, 40} ;
    int *ptr = arr;

    cout << arr << endl;            //0x61feec
    cout << ptr << endl;            //0x61feec

    cout << "Address :- " << (ptr+1) << " " << "Value :- " << *(ptr + 1) << endl;         //0x61fef0 = 20
    cout << "Address :- "<< (ptr+3) << " " << "Value:- " <<*(ptr + 3) << endl;         //0x61fef8 = 40
    ptr ++ ;
    cout << *ptr << endl;           // 20

    return 0;
}