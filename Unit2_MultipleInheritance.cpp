#include <iostream>
using namespace std;

class Printer {
public:
    void print() { cout << "Printing document..." << endl; }
};

class Scanner {
public:
    void scan() { cout << "Scanning document..." << endl; }
};

class AllInOnePrinter : public Printer, public Scanner {
public:
    void copy() {
        scan();
        print();
    }
};

int main() {
    AllInOnePrinter dev;
    dev.copy();
}
