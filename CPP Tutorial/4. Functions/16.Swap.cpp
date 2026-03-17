#include <bits/stdc++.h>
using namespace std;

//swaping elements of the array 

void swap(int v[], int k) {
    int temp;
    temp = v[k];
    v[k] = v[k+1];
    v[k+1] = temp;
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int v[] = {10,20,30,40,50};
    int k = 0;

    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    cout << v[4] << endl;

    swap(v,k);

    cout << "After Swapping :- " << endl;

    cout << v[0] << endl;
    cout << v[1] << endl;
    cout << v[2] << endl;
    cout << v[3] << endl;
    cout << v[4] << endl;

    //printing using loop 
    for(auto i : v){
        cout << i << " ";
    }
    return 0;
}