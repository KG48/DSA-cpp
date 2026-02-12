#include <iostream>
using namespace std;

int Sum(int a, int b, int sum){

    // a=20;
    // b=30;

    sum=a+b;   
    return sum;
}

int main() {

    
    int sum;
    cout << "Sum is : "<< Sum(10,15,sum);
    return 0;
}