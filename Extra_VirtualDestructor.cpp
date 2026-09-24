#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base Constructor" << endl; }
    virtual ~Base() { cout << "Base Destructor" << endl; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived Constructor" << endl; }
    ~Derived() override { cout << "Derived Destructor" << endl; }
};

int main() {
    Base* ptr = new Derived();
    delete ptr;
}
