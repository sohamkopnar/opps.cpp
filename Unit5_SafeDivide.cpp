#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double a, double b) {
    if (b == 0) {
        throw runtime_error("Division by zero error!");
    }
    return a / b;
}

int main() {
    try {
        cout << "Result: " << divide(10.0, 2.0) << endl;
        cout << "Result: " << divide(5.0, 0.0) << endl;
    } catch (const runtime_error& e) {
        cout << "Error caught: " << e.what() << endl;
    }
}
