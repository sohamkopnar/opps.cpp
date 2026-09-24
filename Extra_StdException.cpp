#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};
    try {
        cout << v.at(5) << endl;
    } catch (const out_of_range& e) {
        cout << "Caught exception: " << e.what() << endl;
    }
}
