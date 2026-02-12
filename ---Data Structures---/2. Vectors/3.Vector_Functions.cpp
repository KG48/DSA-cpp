#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

/* 
    ---Functions with time complexity O(1); constant time at worst case 
 1. size
      --- return the size of the vector 
 2. push_back
      --- new value get added to empty vector or at the end of vector
 3. pop_back
     --- delete element from last of array
 4. front
     --- to print starting value of vector 
 5. back 
     --- return last value 
 6. at 
     --- access value at in any index in the vector


     ---Some Costly functions with time complexity O(n);  linear time at worst case 
 1. erase 
     --- used to erase elements/ range of elements of a vector
 2. insert
     --- place value at any position 
 3. clear
     --- deletes all the elements of array 
 4. empty
     --- used to check whether given vector is empty or not   

 
     --- Vector Interators

 1. vec.begin
    --- returns beginning iterator 
 2. vec.end
    --- returns ending iterator - but it is not n-1 index value ..it is next place to it which can be garbage or zero value
 
 */


 int main() {

    vector<int> vec = {1, 2, 4, 5 , 2, 5};
    
    vec.push_back(25);       // 2. Push back Function 
    vec.push_back(35);
    vec.push_back(45);

    for(int i : vec) {          // for each loop for vector print 
        cout << i << " " ;  
    }
    cout << "\nLast Value :- " << vec.back() << endl;      //  5. back function 

    vec.pop_back();             // 3. Pop back function :- last elements get deleted  //45

    cout << endl;

    for(int i : vec) {          // for each loop for vector print 
        cout << i << " " ;  
    }

    cout << "\nFront Value :- " << vec.front();   // 4. front function 

    cout << "\nLast Value :- " << vec.back();      //  5. back function 

    cout << "\nValue at index 4 :- " << vec.at(4);    // 6. At function   // return index value

    cout << "\nsize of vector :- " << vec.size() <<endl;      // 1. Size function 
    
    cout << "Array before :- ";
    for(int i: vec) {
        cout << i << " ";
    }
    vec.erase(vec.begin()); // 1. erase function -- passes iterator 
    vec.erase(vec.begin() + 2);  // can pass any iterator to deleted or erase the value at that indices
        // output :- oth and 3rd index value will get deleted   
    cout << endl;
    cout << "Array After :- ";    //output :-  2 gets deleted 
    for(int i : vec) {
        cout << i << " ";
    }

    // can also delete a range of values from array

    vec.erase(vec.begin()+1, vec.begin() + 5);
    cout << "\nArray After deleting Range from Index 1 to 5 :- "; // but 5 is not included //syntax = vec.erase(start, end);
    for(int i : vec) {
        cout << i << " ";
    } cout << endl;

    vec.insert(vec.begin() + 1, 10);  // 2. insert function // syntax : vec.insert(position, value);
    vec.insert(vec.begin() + 2, 100);
    vec.insert(vec.begin() + 1, 9);   // if element is already present that index then the element get shifted to 
    // right and new element get inserted to that index
    cout << "Array After inserting new Values :- ";
    for(int i: vec) {
        cout << i << " ";
    }

    vec.clear();    // 3. clear function 
    cout << "\narray after deleting all values:- ";
    for(int i : vec) {
        cout << i << " ";    // empty because clear function deletes all valuess 
    }

    cout << "\nSize of vector after deleting all values of array :- "<< vec.size();
    cout << "\nCapacity of vector after deleting all values of array :- "<< vec.capacity() << endl;  // capacity gets doubled to the initial size after adding 
    // any number of elements less than doubled size 
    
    cout << "is vector empty :- " << vec.empty() << endl;   // 4. empty function -- 1 for true and 0 for false 

    vector<int> nums = {1, 3, 5, 7, 9, 0};   //new vector

    cout << "nums.begin() :- "<< *(nums.begin()) << endl;   //1. Iterator begin function // * is dereference operator 
    cout << "nums.end() :- "<< *(nums.end()) << endl;  //2. Iterator end function //  garbage value
    return 0;
 }