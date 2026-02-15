#include <bits/stdc++.h>
using namespace std;

int addition(int x, int y){
    return x + y;

}

int subtraction(int x, int y){
    return x - y;
}

int Multiplication(int x, int y){
    return x * y;
}

float division(int x, int y){
    if(y != 0) {
        return (float)x/y;
    }else {
        return 0;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin >> x >> y;

    cout << "Addition :- "<<  addition(x,y) << endl;
    cout << "Subtraction :- " << subtraction(x,y) << endl;
    cout << "Multiplication :- "<< Multiplication(x,y) << endl;
    cout << "Division :- " << division(x,y) << endl;
    
    return 0;
}