#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay(double amount) const = 0;
    virtual ~Payment() = default;
};

class CardPayment : public Payment {
public:
    void pay(double amount) const override {
        cout << "Paid Rs. " << amount << " using Card\n";
    }
};

class WalletPayment : public Payment {
public:
    void pay(double amount) const override {
        cout << "Paid Rs. " << amount << " using Digital Wallet\n";
    }
};

void processPayment(const Payment& payment, double amount) {
    payment.pay(amount);
}

int main() {
    CardPayment card;
    WalletPayment wallet;
    processPayment(card, 1250.0);
    processPayment(wallet, 300.0);
    return 0;
}
