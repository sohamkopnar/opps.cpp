#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {45, 12, 85, 32, 89, 21};
    sort(numbers.begin(), numbers.end());

    cout << "Sorted Numbers: ";
    for (int n : numbers) cout << n << " ";
    cout << endl;

    if (binary_search(numbers.begin(), numbers.end(), 32)) {
        cout << "Element 32 found in vector." << endl;
    }
}
