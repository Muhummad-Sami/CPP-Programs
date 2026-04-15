#include <iostream>
using namespace std;

class Shallow {
public:
    int* data;

    Shallow(int value) {
        data = new int(value);
    }

    // Default copy constructor ? shallow copy
    void display() {
        cout << "Value: " << *data << ", Address: " << data << endl;
    }

    ~Shallow() {
        delete data;
        cout << "Destructor called\n";
    }
};

int main() {
    Shallow obj1(10);
    Shallow obj2 = obj1; // Shallow copy: both point to same memory!

    obj1.display();
    obj2.display(); // Same address as obj1!

    return 0;
}

