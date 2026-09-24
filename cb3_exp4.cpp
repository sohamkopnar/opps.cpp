#include <iostream>
using namespace std;

class Counter {
private:
    int value;
public:
    explicit Counter(int initialValue = 0) : value(initialValue) {}
    Counter& operator++() {
        ++value;
        return *this;
    }
    Counter operator++(int) {
        Counter old = *this;
        ++value;
        return old;
    }
    Counter& operator--() {
        --value;
        return *this;
    }
    Counter operator--(int) {
        Counter old = *this;
        --value;
        return old;
    }
    void display() const {
        cout << value << '\n';
    }
};

int main() {
    Counter counter(5);
    ++counter;
    cout << "After prefix increment: ";
    counter.display();
    --counter;
    cout << "After prefix decrement: ";
    counter.display();
    return 0;
}
