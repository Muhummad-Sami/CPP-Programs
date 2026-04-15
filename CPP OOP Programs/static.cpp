#include <iostream>
using namespace std;

class myclass {
    public:
        static int count; // Shared static variable

        myclass() {
            count++; //  Increment the count in the constructor
            cout << "Constructor called, count is now: " << count << endl;
        }
};

int myclass::count = 0; // Initialize static variable

int main() {
    myclass obj1; // First object created, count becomes 1
    myclass obj2; // Second object created, count becomes 2
    myclass obj3; // Third object created, count becomes 3

    cout << "Final count: " << myclass::count << endl;
    return 0;
}

