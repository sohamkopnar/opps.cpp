#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("data.txt");
    outFile << "Line 1\nLine 2\nLine 3\n";
    outFile.close();

    ifstream inFile("data.txt");
    string line;
    int count = 0;
    while (getline(inFile, line)) {
        count++;
    }

    cout << "Total lines in file: " << count << endl;
}
