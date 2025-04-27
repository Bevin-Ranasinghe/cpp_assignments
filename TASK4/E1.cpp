#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload +
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload -
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Overload /
    Complex operator/(const Complex& other) const {
        double denominator = (other.real * other.real + other.imag * other.imag);
        double new_real = (real * other.real + imag * other.imag) / denominator;
        double new_imag = (imag * other.real - real * other.imag) / denominator;
        return Complex(new_real, new_imag);
    }

    // Friend function to overload <<
    friend ostream& operator<<(ostream& out, const Complex& c);
};

// Overload << outside the class
ostream& operator<<(ostream& out, const Complex& c) {
    if (c.imag >= 0)
        out << c.real << " + " << c.imag << "i";
    else
        out << c.real << " - " << -c.imag << "i";
    return out;
}

// Main function to test
int main() {
    Complex c1(4, 5), c2(2, -3);

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;

    cout << "Sum = " << c1 + c2 << endl;
    cout << "Difference = " << c1 - c2 << endl;
    cout << "Quotient = " << c1 / c2 << endl;

    return 0;
}
