#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
public:
    explicit Distance(int value) : meters(value) {}
    bool operator>(const Distance& other) const {
        return meters > other.meters;
    }
    bool operator==(const Distance& other) const {
        return meters == other.meters;
    }
    void display() const {
        cout << meters << " meters\n";
    }
};

int main() {
    Distance d1(100), d2(100);
    if (d1 == d2) {
        cout << "Distances are equal\n";
    }
    return 0;
}
