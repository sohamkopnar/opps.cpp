#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max Int: " << findMax(10, 20) << endl;
    cout << "Max Double: " << findMax(15.5, 10.2) << endl;
}
