#include <iostream>
using namespace std;


class Shape {
public:
    // Virtual function for runtime polymorphism
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override { // Override the base class method
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override { // Override the base class method
        cout << "Drawing a square" << endl;
    }
};

// Function overloading for compile-time polymorphism
void display(int number) {
    cout << "Displaying integer: " << number << endl;
}

void display(double number) {
    cout << "Displaying double: " << number << endl;
}

int main() {
    // Stack memory allocation for objects
    Shape shape;          // Base class object
    Circle circle;       // Derived class object
    Square square;       // Derived class object

    // Using runtime polymorphism
    Shape* shapePtr;     // Pointer to base class
    shapePtr = &circle;  // Pointing to Circle object
    shapePtr->draw();    // Calls Circle's draw() method

    shapePtr = &square;  // Pointing to Square object
    shapePtr->draw();    // Calls Square's draw() method

    // Using compile-time polymorphism
    display(5);          // Calls display(int)
    display(5.5);        // Calls display(double)

    return 0;
}
