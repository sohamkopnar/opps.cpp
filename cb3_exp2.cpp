#include <iostream>
using namespace std;

int calculateArea(int side) {
    return side * side;
}

int calculateArea(int length, int width) {
    return length * width;
}

double calculateArea(double radius) {
    constexpr double PI = 3.141592653589793;
    return PI * radius * radius;
}

double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    cout << "Square Area: " << calculateArea(5) << '\n';
    cout << "Rectangle Area: " << calculateArea(6, 4) << '\n';
    cout << "Circle Area: " << calculateArea(2.0) << '\n';
    cout << "Triangle Area: " << calculateArea(4.0, 5.0) << '\n';
    return 0;
}
