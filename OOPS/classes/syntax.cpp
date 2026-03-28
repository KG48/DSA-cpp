#include<iostream>
#include<string>
using namespace std;

class Student{

    private:
        int marks = 90;
    public:
    int age = 10;
    string Name = "Priya";
    string *ptr = &Name;

    void dislplay() {
        cout << age << endl;
    }
    void ChangeName(string NewName) {
        Name = NewName;   
    }
    
    void getMarks() {
        cout << marks << endl;
    }
};

int main() {
    Student s1;
    s1.dislplay();
    cout << s1.Name << endl;

    s1.getMarks();

    s1.ChangeName("Karan");
    cout << s1.Name;
    return 0;
}