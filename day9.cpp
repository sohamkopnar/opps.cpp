#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n) { name = n; }
    void displayName() { cout << "Name: " << name << endl; }
};

class Student : public Person {
private:
    int rollNumber;
public:
    Student(string n, int r) : Person(n) { rollNumber = r; }
    void displayStudent() {
        displayName();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student s("Amit", 101);
    s.displayStudent();
    return 0;
}