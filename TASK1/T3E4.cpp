#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) : brand(b), year(y) {}

    virtual void showInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }

    virtual void startEngine() {
        cout << "Starting engine of Vehicle" << endl;
    }

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
protected:
    int numDoors;

public:
    // Constructor
    Car(string b, int y, int doors) : Vehicle(b, y), numDoors(doors) {}

    // Override showInfo to display all attributes
    void showInfo() override {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
        cout << "Number of doors: " << numDoors << endl;
    }

    // Override startEngine
    void startEngine() override {
        cout << "Car engine is starting!" << endl;
    }
};

// Derived class: ElectricCar
class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    // Default constructor
    ElectricCar() : Car("Unknown", 0, 0), batteryCapacity(0) {}

    // Parameterized constructor
    ElectricCar(string b, int y, int doors, int battery) : Car(b, y, doors), batteryCapacity(battery) {}

    // Override showInfo to display all attributes
    void showInfo() override {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
        cout << "Number of doors: " << numDoors << endl;
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }

    // Override startEngine
    void startEngine() override {
        cout << "Electric engine is starting... Silent but powerful!" << endl;
    }
};

int main() {
    // Create a Vehicle object
    Vehicle* vehicle = new Vehicle("Generic", 2015);
    vehicle->showInfo();
    vehicle->startEngine();
    delete vehicle;

    // Create a Car object
    Car* car = new Car("Toyota", 2021, 4);
    car->showInfo();
    car->startEngine();
    delete car;

    // Create an ElectricCar object using the default constructor
    ElectricCar* electricCar1 = new ElectricCar();
    electricCar1->showInfo();
    electricCar1->startEngine();
    delete electricCar1;

    // Create an ElectricCar object using the parameterized constructor
    ElectricCar* electricCar2 = new ElectricCar("Tesla", 2023, 4, 75);
    electricCar2->showInfo();
    electricCar2->startEngine();
    delete electricCar2;

    return 0;
}