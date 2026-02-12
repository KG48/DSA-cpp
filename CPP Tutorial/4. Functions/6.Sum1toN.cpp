#include <iostream>
using namespace std;

int Sum(int N){
    
    
    int sum=0;

    for(int i=1; i<=N; i++) {
        sum += i;
    }
    return sum;
}

int main() {

    cout << Sum(10);
    return 0;
}