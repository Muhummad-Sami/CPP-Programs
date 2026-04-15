#include <iostream>
using namespace std;

class Example {
private:
    int value; //data member 

public:
    
    void setValue(int value) {
        this->value = value;  
    }

   
    void displayValue() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Example obj;

    // Set value using the method
    obj.setValue(10);

    // Display the value
    obj.displayValue();

    return 0;
}

