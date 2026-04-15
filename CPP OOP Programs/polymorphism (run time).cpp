#include <iostream>
#include <string>
using namespace std;

// Base class
class base {
    public:
        string name;
        int id;
        int year;

        // Constructor for the base class
        base() {
            name = "Ali";
            id = 111;
            year = 2000;
        }

        // Virtual function for polymorphism
        virtual void fun() {
            cout << "Base Class:" << endl;
            cout << "The Name Of the Employee is: " << name << endl;
            cout << "The ID Of the Employee Is: " << id << endl;
            cout << "The Joining Year Of the Employee Is: " << year << endl;
        }

};

// Derived class
class derived : public base {
    private:
        int salary;

    public:
        // Constructor for the derived class
        derived() {
            salary = 50000;
        }

        // Overriding the base class function
        void fun() override {
            cout << "Derived Class:" << endl;
            cout << "The Name Of the Employee is: " << name << endl;
            cout << "The ID Of the Employee Is: " << id << endl;
            cout << "The Joining Year Of the Employee Is: " << year << endl;
            cout << "The Salary Of the Employee Is: " << salary << endl;
        }
};

int main() {
    base *obj;      // Pointer to the base class
    derived d_obj;  // Object of the derived class

    obj = &d_obj;   // Assign derived class object to base class pointer
    obj->fun();     // Call the derived class's overridden function using polymorphism

    return 0;
}

