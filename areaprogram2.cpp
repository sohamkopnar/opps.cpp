#include <iostream>
using namespace std;

// Calculate area of a square
int calculateArea(int side) {
    return side * side;
}

// Calculate area of a rectangle
int calculateArea(int length, int width) {
    return length * width;
}

// Calculate area of a circle
double calculateArea(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

int main() {

    cout << "Area of Square: " << calculateArea(5) << endl;

    cout << "Area of Rectangle: " << calculateArea(6, 4) << endl;

    cout << "Area of Circle: " << calculateArea(2.0) << endl;

    return 0;
}