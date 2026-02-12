#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vec = {1, 10, 12, 8, 4, 20, 60, 90, 4};

    int i;
    int search;
    cout << "Enter Number from list to Search for :- ";
    cin >> search;

    for( i=0; i< vec.size(); i++) {
        if(vec[i]==search) {
            cout << "Element " << search << " is found at location " << i + 1;
            return 0;
        }
    }
    if(i==vec.size()) {
        cout << "Element is Not Available in the list ";
    }
    return 0;
}