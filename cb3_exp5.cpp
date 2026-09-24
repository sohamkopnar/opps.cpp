#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;
public:
    Complex(int realPart = 0, int imaginaryPart = 0) : real(realPart), imaginary(imaginaryPart) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }
    void display() const {
        cout << real << (imaginary >= 0 ? " + " : " - ") << (imaginary >= 0 ? imaginary : -imaginary) << "i\n";
    }
};

int main() {
    Complex c1(5, 7), c2(2, 3);
    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    cout << "Sum: "; sum.display();
    cout << "Difference: "; diff.display();
    return 0;
}
