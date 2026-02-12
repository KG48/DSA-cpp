#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5}; 

    cout << arr << endl;  // pointer
 
    cout << *arr << endl; // pointer => 1

    cout << *(arr + 1) << endl;
    cout << *(arr + 3) << endl;
    return 0;
}