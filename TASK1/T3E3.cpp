 #include <iostream>
#include <string>
 using namespace std;
    
    class Car {
    private:
        string brand;
        int year;
    
    public:
        // Constructor
        Car(string b, int y) {
            brand = b;
            year = y;
            cout << "Car " << brand << " from " << year << " created." << endl;
        }
    
        // Destructor
        ~Car() {
            cout << "Car " << brand << " destroyed." << endl;
        }
    
        // Getter for brand
        string getBrand() {
            return brand;
        }
    
        // Setter for brand
        void setBrand(string b) {
            brand = b;
        }
    
        // Getter for year
        int getYear() {
            return year;
        }
    
        void showInfo() {
            cout << "Car Brand: " << brand << endl;
            cout << "Manufacturing Year: " << year << endl;
        }
    };
    
    int main() {
        Car* myCar = new Car("Mercedes", 2020);
    
        // Call the showInfo() method
        myCar->showInfo();
    
        // Destroy the object using delete
        delete myCar;
    
        return 0;
    }