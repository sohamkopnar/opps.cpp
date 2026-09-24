#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const { return 0.0; }
    virtual ~Shape() = default;
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override { return length * width; }
};

class Circle : public Shape {
private:
    double radius;
public:
    explicit Circle(double r) : radius(r) {}
    double area() const override { return 3.141592653589793 * radius * radius; }
};

void printArea(const Shape& shape) {
    cout << "Area: " << shape.area() << '\n';
}

int main() {
    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.0);
    printArea(rectangle);
    printArea(circle);
    return 0;
}
