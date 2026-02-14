#include <iostream>
using namespace std;

int main() {

    int a=10;
    int b=20;


    int sum = a + b;     // Arithmetic Operators
    cout << sum << endl;

    cout << (a<b) << endl;   //Relational Operators ...Output : - TRUE-1
    cout << (a>b) << endl;  ///Relational Operators

    cout << "(a == b):- " << (a == b) << endl;          ///Relational Operators
    cout << "(a != b):- " << (a != b) << endl;          ///Relational Operators


    cout << "!(a == b):- " << !(a == b) << endl;          //Logical NOT Operator
    cout << ((a>b) || (a<b)) << endl;                     //logical OR operator 
    cout << ((a>b) && (a<b)) << endl;                     //Logical AND operator 
    cout << (a % b) << endl;

    int x=10;

    int y = ++x;                //Unary Operators    //Increment ++ 
    int z = x--;                //Decrement --

    cout << "y is :- "<< y << endl;
    cout << "x is :- " << x << endl;
    cout << "z is :- " << z << endl;
    return 0;

    
}