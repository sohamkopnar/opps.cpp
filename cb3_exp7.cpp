#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;
public:
    Complex(int realPart = 0, int imaginaryPart = 0) : real(realPart), imaginary(imaginaryPart) {}
    friend Complex operator+(int value, const Complex& number);
    friend Complex operator-(int value, const Complex& number);
    void display() const {
        cout << real << (imaginary >= 0 ? " + " : " - ") << (imaginary >= 0 ? imaginary : -imaginary) << "i\n";
    }
};

Complex operator+(int value, const Complex& number) {
    return Complex(value + number.real, number.imaginary);
}

Complex operator-(int value, const Complex& number) {
    return Complex(value - number.real, -number.imaginary);
}

int main() {
    Complex c1(2, 3);
    Complex res = 10 - c1;
    cout << "Result: "; res.display();
    return 0;
}
