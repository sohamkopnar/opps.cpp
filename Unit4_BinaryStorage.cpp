#include <fstream>
#include <iostream>
using namespace std;

struct StudentRecord {
    int id;
    char name[30];
    double score;
};

int main() {
    StudentRecord s1{101, "Priya", 92.5};

    ofstream outFile("student.dat", ios::binary);
    outFile.write(reinterpret_cast<char*>(&s1), sizeof(s1));
    outFile.close();

    StudentRecord s2;
    ifstream inFile("student.dat", ios::binary);
    inFile.read(reinterpret_cast<char*>(&s2), sizeof(s2));
    inFile.close();

    cout << "Binary Read -> ID: " << s2.id << ", Name: " << s2.name << ", Score: " << s2.score << endl;
}
