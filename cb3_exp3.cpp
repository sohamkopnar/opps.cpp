#include <iostream>
using namespace std;

class Balance {
private:
    double amount;
public:
    explicit Balance(double value) : amount(value) {}
    Balance operator-() const {
        return Balance(-amount);
    }
    void display() const {
        cout << "Balance: " << amount << '\n';
    }
};

int main() {
    Balance initialBalance(2500.50);
    Balance negatedBalance = -initialBalance;
    cout << "Original ";
    initialBalance.display();
    cout << "Negated ";
    negatedBalance.display();
    return 0;
}
