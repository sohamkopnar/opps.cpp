#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

class Media {
protected:
    int id;
    string title;

public:
    Media(int i, string t) : id(i), title(t) {}
    virtual void display() const = 0;
    int getId() const { return id; }
    string getTitle() const { return title; }
    virtual ~Media() = default;
};

class Book : public Media {
private:
    string author;

public:
    Book(int i, string t, string a) : Media(i, t), author(a) {}

    void display() const override {
        cout << "[BOOK] ID: " << id << " | Title: " << title << " | Author: " << author << endl;
    }
};

class DigitalMedia : public Media {
private:
    double fileSizeMB;

public:
    DigitalMedia(int i, string t, double size) : Media(i, t), fileSizeMB(size) {}

    void display() const override {
        cout << "[DIGITAL] ID: " << id << " | Title: " << title << " | Size: " << fileSizeMB << " MB" << endl;
    }
};

class LibraryManager {
private:
    vector<unique_ptr<Media>> items;

public:
    void addItem(unique_ptr<Media> media) {
        items.push_back(move(media));
    }

    void showAll() const {
        cout << "\n=== Library Catalog ===" << endl;
        for (const auto& item : items) {
            item->display();
        }
    }

    void saveToFile(const string& filename) const {
        ofstream outFile(filename);
        if (!outFile) return;
        for (const auto& item : items) {
            outFile << item->getId() << "," << item->getTitle() << "\n";
        }
        cout << "\nCatalog saved to " << filename << endl;
    }
};

int main() {
    LibraryManager lib;
    lib.addItem(make_unique<Book>(101, "Object-Oriented Programming", "Bjarne Stroustrup"));
    lib.addItem(make_unique<DigitalMedia>(102, "C++ Reference Guide", 14.5));
    lib.addItem(make_unique<Book>(103, "Design Patterns", "Erich Gamma"));

    lib.showAll();
    lib.saveToFile("library_catalog.txt");
}
