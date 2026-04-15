#include <iostream>
#include <string>

using namespace std;

// Base Vehicle class
class Vehicle {
public:
    virtual void start() {
        cout << "Vehicle starting..." << endl;
    }
    
    virtual void stop() {
        cout << "Vehicle stopping..." << endl;
    }
    
    virtual void fuelType() {
        cout << "Vehicle fuel type: unknown" << endl;
    }
    
    virtual ~Vehicle() {} // Virtual destructor for proper cleanup
};

// Derived Car class
class Car : public Vehicle {
public:
    void start() override {
        cout << "Car starting with key ignition..." << endl;
    }
    
    void stop() override {
        cout << "Car stopping by applying brakes..." << endl;
    }
    
    void fuelType() override {
        cout << "Car fuel type: gasoline/petrol" << endl;
    }
};

// Derived Truck class
class Truck : public Vehicle {
public:
    void start() override {
        cout << "Truck starting with diesel engine..." << endl;
    }
    
    void stop() override {
        cout << "Truck stopping with air brakes..." << endl;
    }
    
    void fuelType() override {
        cout << "Truck fuel type: diesel" << endl;
    }
    
    // Overloaded load methods
    void load(int weight) {
        cout << "Truck loading " << weight << " kg of cargo" << endl;
    }
    
    void load(int weight, int volume) {
        cout << "Truck loading " << weight << " kg of cargo with " << volume << " cubic meters volume" << endl;
    }
};

// Derived Bike class
class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike starting with kick/push button..." << endl;
    }
    
    void stop() override {
        cout << "Bike stopping by applying hand brakes..." << endl;
    }
    
    void fuelType() override {
        cout << "Bike fuel type: petrol (2-stroke/4-stroke)" << endl;
    }
};

int main() {
    // Create base class pointer
    Vehicle* vehiclePtr;
    
    // Demonstrate Car behavior
    cout << "=== Car ===" << endl;
    vehiclePtr = new Car();
    vehiclePtr->start();
    vehiclePtr->stop();
    vehiclePtr->fuelType();
    delete vehiclePtr;
    cout << endl;
    
    // Demonstrate Truck behavior
    cout << "=== Truck ===" << endl;
    vehiclePtr = new Truck();
    vehiclePtr->start();
    vehiclePtr->stop();
    vehiclePtr->fuelType();
    
    // Need to cast to Truck to access load methods
    Truck* truckPtr = dynamic_cast<Truck*>(vehiclePtr);
    if (truckPtr) {
        truckPtr->load(5000);
        truckPtr->load(3000, 20);
    }
    delete vehiclePtr;
    cout << endl;
    
    // Demonstrate Bike behavior
    cout << "=== Bike ===" << endl;
    vehiclePtr = new Bike();
    vehiclePtr->start();
    vehiclePtr->stop();
    vehiclePtr->fuelType();
    delete vehiclePtr;
    
    return 0;
}
