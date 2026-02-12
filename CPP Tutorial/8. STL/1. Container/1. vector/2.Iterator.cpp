#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = { 1, 3 , 5, 9, 2, 10};

    cout << "Array :- ";       // so this is aam zingagi to print vector
    for(int i: nums){
        cout << i << ", ";
    }

    // Iterator :- 1. vec.begin();
    // 2. vec.end();

    cout << "\nnums.begin():- " << *(nums.begin()) << endl;  //returns the beginning index
    cout << "nums.end():- " << *(nums.end()) << endl;  // returns the ending index  // but ending index it not n-1 index it is next 
    // place to it .. so iterator value can be zero or garbage value
    
    // this is mentos zindagi to print vector at any range 

    cout << "Froward Array:- ";
    vector<int>::iterator it;
    for(it = nums.begin() + 2; it!= nums.end(); it++) {      //forrward print
        cout << *(it) << " "; 
    }
    
    cout << endl;

    cout << "Backward Array :- ";
    // vector<int>::iterator sham = auto    we can use auto instead of given function     
    for(auto sham= nums.rbegin(); sham!=nums.rend(); sham++) {   //backward
        cout << *(sham) << " ";
    }
    return 0;
}