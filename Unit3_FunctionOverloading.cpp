#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) { return a + b; }
    double add(double a, double b) { return a + b; }
    int add(int a, int b, int c) { return a + b + c; }
};

int main() {
    Calculator calc;
    cout << "Integer Add: " << calc.add(10, 20) << endl;
    cout << "Double Add: " << calc.add(10.5, 20.3) << endl;
    cout << "Three Ints: " << calc.add(5, 10, 15) << endl;
}
