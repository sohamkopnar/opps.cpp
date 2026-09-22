#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor
    Number(int num) {
        value = num;
    }

    // Overloading unary minus (-) operator
    Number operator-() const {
        return Number(-value);
    }

    // Display the value
    void display() const {
        cout << value << endl;
    }
};

int main() {

    Number num1(25);

    // Apply unary minus operator
    Number num2 = -num1;

    cout << "Original Value: ";
    num1.display();

    cout << "Negated Value: ";
    num2.display();

    return 0;
}