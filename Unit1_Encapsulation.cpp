#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    double gpa;

public:
    Student(int r, string n, double g) : rollNo(r), name(n), gpa(g) {}

    void setGpa(double g) {
        if (g >= 0.0 && g <= 10.0) {
            gpa = g;
        }
    }

    void display() const {
        cout << "Roll No: " << rollNo << " | Name: " << name << " | GPA: " << gpa << endl;
    }
};

int main() {
    Student s1(101, "Aarav", 8.5);
    s1.display();
    s1.setGpa(9.1);
    cout << "Updated Record:" << endl;
    s1.display();
}
