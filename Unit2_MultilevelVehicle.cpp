#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;

public:
    Vehicle(string b) : brand(b) {}
    void start() const { cout << brand << " starting..." << endl; }
};

class Car : public Vehicle {
protected:
    int doors;

public:
    Car(string b, int d) : Vehicle(b), doors(d) {}
};

class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    ElectricCar(string b, int d, int bat)
        : Car(b, d), batteryCapacity(bat) {}

    void display() const {
        cout << brand << " Electric Car | Doors: " << doors
             << " | Battery: " << batteryCapacity << " kWh" << endl;
    }
};

int main() {
    ElectricCar ev("Tesla", 4, 75);
    ev.start();
    ev.display();
}
