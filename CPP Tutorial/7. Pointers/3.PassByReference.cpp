#include <iostream>
using namespace std;



void changeA(int a) {   // pass by value
    a = 20;

}

void changeB(int *x) {  // pass by reference using pointers 
    *x = 20; 

}

void changeC(int &m)  {       // pass by reference using alias

    m = 20;
}

int main() {

    
    //For pass by value

    int a = 10;

    changeA(a);

    cout << "Inside main function :- "<< a <<endl;  

    // For Pass By Reference 
    // -- By pointers 
    

    int b =10;

    changeB(&b);

    cout << "Inside main function :- " << b << endl;

    // For Pass By Reference 
    // -- By alias

    int c = 10;

    changeC(c);

    cout << "Inside Main Function :- "<< c << endl;

    return 0;
}