#include <iostream>


// This function multiplies two integers
int multiply(int a, int b) {
    return a * b;
}
// This function is overloaded to handle double types
double multiply(double a, double b) {
    return a * b;
}
// This function is overloaded multiply that take 3 inputs  
double multiply(int a, double b, bool flag) {
    if (flag) {
        return int(a * b);
    } else {
        return a * b; 
    }
}

int main() {
    //a
    int a, b;
    std::cout << "Enter two numbers to multiply: ";
    std::cin >> a >> b;
    int result = multiply(a, b);
    std::cout << "Result: " << result << std::endl;
    //b
    double doubleResult;
    std::cout << "Enter two double numbers to multiply: ";
    double aDouble, bDouble;
    std::cin >> aDouble >> bDouble;
    doubleResult = multiply(aDouble, bDouble);
    std::cout << "Result: " << doubleResult << std::endl;
    //c
    std::cout << "Enter: ";
    int aInt;
    double bDouble2;
    bool flag;
    std::cin >> aInt >> bDouble2 >> flag;
    doubleResult = multiply(aInt, bDouble2, flag);
    std::cout << "Result: " << doubleResult << std::endl;

    return 0;
}
