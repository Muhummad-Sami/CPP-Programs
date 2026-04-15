#include <iostream>
#include <string>
using namespace std;

// Base Class
class vahical {
public:
    string name;
    int seats;
    string hp;
    int speed;
    static int objectCount; // Static variable to track the number of objects created.

    vahical() // Constructor
    {
        name = "Porche";
        seats = 2;
        hp = "400hp";
        speed = 340;
        objectCount++; // Increment the object count each time an object is created.
    }

    void display() // Function
    {
        cout << "The Base Class." << endl << endl;
        cout << "The Name Of the Car is: " << name << endl;
        cout << "The Seats In the Car: " << seats << endl;
        cout << "The Horse Power Of The Car Is: " << hp << endl;
        cout << "The Speed Of The Car is: " << speed << endl << endl;
    }
};

// Initialize the static variable outside the class.
int vahical::objectCount = 0;

// Derived Class
class car : public vahical {
private:
    string window;
    string music;
    string fuel;

public:
    int facilities(string window, string music, string fuel) {
        cout << "The Derived Class Car From The Base Class." << endl << endl;
        cout << "Your Car Have The Ability To Open the Window? ";
        cin >> window;
        cout << "Your Car Have Music System? ";
        cin >> music;
        cout << "How Much Your Car Have Fuel? ";
        cin >> fuel;
        cout << endl << endl;
    }
};

class truck : public vahical {
public:
    string capacity;
    string loading;

    truck() {
        capacity = "400Ton";
        loading = "Yes";
    }

    void cargo() {
        cout << "The Derived Class Truck From The Base Class." << endl << endl;
        cout << "How Much Capacity of Your Truck Is: " << capacity << endl;
        cout << "Is Your Truck Have Any Loading Operation? " << loading << endl << endl;
    }
};

int main() {
    string windo;
    string musi;
    string fue;

    truck obj; // Object 1
    obj.display();

    car obj2; // Object 2
    obj2.facilities(windo, musi, fue);
    obj.cargo();

    // Display the count of objects created.
    cout << "Total number of objects created: " << vahical::objectCount << endl;

    return 0;
}

