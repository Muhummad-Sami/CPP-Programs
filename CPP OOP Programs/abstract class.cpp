#include <iostream>
#include <string>
using namespace std;

class Shirt {
public:
    string name, color;

    virtual void display() = 0; // Fixed typo ("dispaly" ? "display")

    void getName() {
        cout << "Enter The Shirt Name: ";
        cin >> name;
    }

    void getColor() {
        cout << "Enter the Shirt Color: ";
        cin >> color;
    }
};

class Shirt1 : public Shirt {
public:
    string size;

    void getSize() {
        cout << "Enter the Size of The Shirt: ";
        cin >> size;
    }
};

class Shirt2 : public Shirt1 {
public:
    void display() override {
        cout << "\nShirt Details:\n";
        cout << "Name: " << name << endl;
        cout << "Color: " << color << endl;
        cout << "Size: " << size << endl;
    }
};

int main() {
    // Dynamically creating an object
    Shirt2 *shirtObj = new Shirt2();

    // Taking user input
    shirtObj->getName();
    shirtObj->getColor();
    shirtObj->getSize();

    // Displaying details
    shirtObj->display();

    // Free allocated memory
    delete shirtObj;

    return 0;
}




