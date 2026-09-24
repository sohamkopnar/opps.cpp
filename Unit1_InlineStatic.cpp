#include <iostream>
using namespace std;

class Item {
private:
    int id;
    static int totalItems;

public:
    Item(int i) : id(i) { totalItems++; }

    inline void showId() const {
        cout << "Item ID: " << id << endl;
    }

    static int getTotalItems() {
        return totalItems;
    }
};

int Item::totalItems = 0;

int main() {
    Item a(101), b(102), c(103);
    a.showId();
    b.showId();
    c.showId();
    cout << "Total items created: " << Item::getTotalItems() << endl;
}
