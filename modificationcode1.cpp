#include <iostream>
using namespace std;

// Add two integers
int add(int first, int second) {
    return first + second;
}

// Add two double values
double add(double first, double second) {
    return first + second;
}

// Add three integers
int add(int first, int second, int third) {
    return first + second + third;
}

int main() {

    cout << "Sum of two integers: " << add(10, 20) << endl;

    cout << "Sum of two doubles: " << add(2.5, 3.7) << endl;

    cout << "Sum of three integers: " << add(10, 20, 30) << endl;

    return 0;
}