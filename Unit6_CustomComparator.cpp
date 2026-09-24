#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Product {
    string name;
    double price;
};

int main() {
    vector<Product> catalog = {
        {"Laptop", 55000},
        {"Mouse", 500},
        {"Keyboard", 1500}
    };

    sort(catalog.begin(), catalog.end(), [](const Product& a, const Product& b) {
        return a.price < b.price;
    });

    cout << "Products sorted by price (ascending):" << endl;
    for (const auto& p : catalog) {
        cout << p.name << ": Rs. " << p.price << endl;
    }
}
