#include <iostream>
#include <fstream>

using namespace std;

int main() {

    int choice;
    int roll;
    string name;
    float marks;

    do {
        cout << "\n----STUDENT RECORD SYSTEM----\n";
        cout << "1. Add record\n";
        cout << "2. View record\n";
        cout << "3. Exit\n";

        cout << "Enter your choice : ";
        cin >> choice;

        // Option 1: Add Record
        if (choice == 1) {
            ofstream fout("student.txt", ios::app);

            cout << "Enter roll number : ";
            cin >> roll;

            cout << "Enter name : ";
            cin >> name;

            cout << "Enter marks : ";
            cin >> marks;

            fout << roll << " " << name << " " << marks << endl;
            fout.close();

            cout << "Record saved successfully!\n";
        }

        // Option 2: View Record
        else if (choice == 2) {
            ifstream fin("student.txt");

            cout << "\n---STUDENTS RECORDS---\n";

            while (fin >> roll >> name >> marks) {
                cout << "ROLL : " << roll
                     << " NAME : " << name
                     << " MARKS : " << marks << endl;
            }

            fin.close();
        }

    } while (choice != 3);

    return 0;
}