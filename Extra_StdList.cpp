#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1, 2, 3, 4};
    l.push_front(0);
    l.push_back(5);

    cout << "List Elements: ";
    for (int x : l) cout << x << " ";
    cout << endl;
}
