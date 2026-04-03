#include <bits/stdc++.h>
using namespace std;

class Student{
    string Name;
    int rollNo;

    public:

    void read();
    void display();
};

void Student :: read() {
    cout << "Enter Name :- " << flush;
    getline(cin, Name);

    cout << "Enter roll No :- " << flush;
    cin >> rollNo;
}

void Student :: display() {
    cout <<  "name :- "<<  Name << endl;
    cout  << "roll no :- "<< rollNo << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Student *ptr = new Student();
    
    ptr->read();
    ptr->display();   
    
    return 0;
}