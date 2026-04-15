 #include <iostream>
using namespace std;

class overload {
public:
    // Overloaded add functions
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    // Overloaded multiply functions
    int multiply(int a, int b) {
        return a * b;
    }

    float multiply(float a, float b) {
        return a * b;
    }
};

int main() {
    overload obj;
    
   int num1,num2;
   cout<<"Enter 1st Number: ";
   cin>>num1;
   cout<<"Enter 2nd Number: ";
   cin>>num2;
   cout<<"The Sum is: "<<obj.add(num1,num2);
    int num1,num2;
   cout<<"Enter 1st Number: ";
   cin>>num1;
   cout<<"Enter 2nd Number: ";
   cin>>num2;
   
    cout<<"The Sum is: "<<obj.add(num1,num2);
       
    
//    float floatSum = obj.add(5.5f, 3.3f);
//
//    cout << "Sum of two integers (5 + 3): " << intSum << endl;
//    cout << "Sum of two floats (5.5 + 3.3): " << floatSum << endl;
//
//  
//    int intProduct = obj.multiply(4, 2);
//    float floatProduct = obj.multiply(4.4f, 2.2f);
//
//    cout << "Product of two integers (4 * 2): " << intProduct << endl;
//    cout << "Product of two floats (4.4 * 2.2): " << floatProduct << endl;

    return 0;
}

