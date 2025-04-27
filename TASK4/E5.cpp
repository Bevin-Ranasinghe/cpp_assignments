#include <iostream>
#include <string>
using namespace std;

// Base class Car
class Car {
protected:
    string model;
    int year;
    float price;

public:
    Car(string m = "", int y = 0, float p = 0.0) : model(m), year(y), price(p) {}

    virtual void inputBasic() {
        cout << "Model: ";
        cin.ignore();
        getline(cin, model);
        cout << "Year: ";
        cin >> year;
        cout << "Price: ";
        cin >> price;
    }

    virtual void displayBasic() const {
        cout << "Model: " << model << ", Year: " << year << ", Price: $" << price;
    }

    virtual ~Car() {
        cout << "Destroying car: " << model << endl;
    }
};

// Derived class ElectricCar
class ElectricCar : public Car {
private:
    float batterySize;

public:
    void inputBasic() override {
        Car::inputBasic();
        cout << "Battery size (kWh): ";
        cin >> batterySize;
    }

    void displayBasic() const override {
        Car::displayBasic();
        cout << ", Battery Size: " << batterySize << " kWh" << endl;
    }
};

// Derived class GasCar
class GasCar : public Car {
private:
    float fuelCapacity;

public:
    void inputBasic() override {
        Car::inputBasic();
        cout << "Fuel capacity (L): ";
        cin >> fuelCapacity;
    }

    void displayBasic() const override {
        Car::displayBasic();
        cout << ", Fuel Capacity: " << fuelCapacity << " L" << endl;
    }
};

// Derived class HybridCar
class HybridCar : public Car {
private:
    float batterySize;
    float fuelCapacity;

public:
    void inputBasic() override {
        Car::inputBasic();
        cout << "Battery size (kWh): ";
        cin >> batterySize;
        cout << "Fuel capacity (L): ";
        cin >> fuelCapacity;
    }

    void displayBasic() const override {
        Car::displayBasic();
        cout << ", Battery Size: " << batterySize << " kWh, Fuel Capacity: " << fuelCapacity << " L" << endl;
    }
};

// Main function
int main() {
    int n;
    cout << "Enter number of cars: ";
    cin >> n;

    Car** fleet = new Car*[n];
    int* types = new int[n]; // 1 = Electric, 2 = Gas, 3 = Hybrid

    // Input part
    for (int i = 0; i < n; ++i) {
        cout << "\nCar " << i + 1 << " type (1-Electric, 2-Gas, 3-Hybrid): ";
        cin >> types[i];

        if (types[i] == 1)
            fleet[i] = new ElectricCar();
        else if (types[i] == 2)
            fleet[i] = new GasCar();
        else if (types[i] == 3)
            fleet[i] = new HybridCar();
        else {
            cout << "Invalid type. Default basic car created." << endl;
            fleet[i] = new Car();
        }

        fleet[i]->inputBasic();
    }

    // Fleet Information display
    cout << "\n---Fleet Information---\n";
    for (int i = 0; i < n; ++i) {
        fleet[i]->displayBasic();
    }

    // Cleaning up
    cout << "\n---Cleaning up fleet---\n";
    for (int i = 0; i < n; ++i) {
        delete fleet[i]; 
    }

    delete[] fleet;
    delete[] types;

    return 0;
}
