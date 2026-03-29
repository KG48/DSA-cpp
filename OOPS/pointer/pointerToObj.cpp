#include <bits/stdc++.h>
using namespace std;

class Student{
    string Name;
    int age;
    int *ptr;

    public:
    void read();
    void display();
};

void Student :: read() {
    cout << "Enter Name :- " << flush;
    getline(cin, Name);

    cout << "Enter Age :- " << flush;
    cin >> age;
}

void Student :: display() {
    cout << "Name :- " << Name << endl;
    cout << "Age :- " << age << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // Student S1;
    // S1.read();
    // S1.display();

    Student *ptr = new Student();  // pointer to object
    // ptr -> read();
    (*ptr).read();
    ptr-> display();

    Student S2;
    Student *p = &S2;
    (*p).read();
    (*p).display();


    return 0;
}