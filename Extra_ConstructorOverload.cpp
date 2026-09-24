#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;

public:
    Box() : length(1), width(1), height(1) {}
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

    double volume() const { return length * width * height; }
};

int main() {
    Box b1;
    Box b2(3, 4, 5);
    cout << "Default Box Volume: " << b1.volume() << endl;
    cout << "Custom Box Volume: " << b2.volume() << endl;
}
