#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
private:
    vector<T> elements;

public:
    void push(T const& elem) { elements.push_back(elem); }
    void pop() {
        if (!elements.empty()) elements.pop_back();
    }
    T top() const {
        return elements.back();
    }
    bool empty() const { return elements.empty(); }
};

int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    cout << "Int Stack Top: " << intStack.top() << endl;

    Stack<string> strStack;
    strStack.push("Hello");
    strStack.push("World");
    cout << "String Stack Top: " << strStack.top() << endl;
}
