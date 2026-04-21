#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;

    void show() {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
public:
    int seats;

    void display() {
        show();
        cout << "Seats: " << seats << endl;
    }
};

int main() {
    Car c;
    c.brand = "Toyota";
    c.seats = 5;

    c.display();

    return 0;
}