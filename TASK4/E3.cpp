#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    int year;
    double price;

public:
    Car(string m = "", int y = 0, double p = 0) {
        model = m;
        year = y;
        price = p;
    }

    void input() {
        cout << "Model: ";
        cin.ignore();
        getline(cin, model);
        cout << "Year: ";
        cin >> year;
        cout << "Price: ";
        cin >> price;
    }

    void show() const {
        cout << "Model: " << model << ", Year: " << year << ", Price: $" << price << endl;
    }

    ~Car() {
        cout << "Deleted Car: " << model << endl;
    }
};

class CarCollection {
private:
    Car* list;
    int num;

public:
    CarCollection(int n) {
        num = n;
        list = new Car[num];
    }

    void inputAll() {
        for (int i = 0; i < num; i++) {
            cout << "\nCar " << i+1 << ":\n";
            list[i].input();
        }
    }

    void showAll() const {
        for (int i = 0; i < num; i++) {
            list[i].show();
        }
    }

    ~CarCollection() {
        delete[] list;
        cout << "CarCollection destroyed" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of cars: ";
    cin >> n;

    CarCollection cc(n);
    cc.inputAll();
    cc.showAll();

    return 0;
}
