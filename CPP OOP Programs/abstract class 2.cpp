//#include <iostream>
//using namespace std;
//
//class Shape {
//public:
//    virtual double area() = 0;       // Pure virtual
//    virtual double perimeter() = 0;  // Pure virtual
//};
//
//class Circle : public Shape {
//    double radius;
//public:
//    Circle(double r) : radius(r) {}
//    double area() override { return 3.14 * radius * radius; }
//    double perimeter() override { return 2 * 3.14 * radius; }
//};
//
//class Rectangle : public Shape {
//    double length, width;
//public:
//    Rectangle(double l, double w) : length(l), width(w) {}
//    double area() override { return length * width; }
//    double perimeter() override { return 2 * (length + width); }
//};
//
//int main() {
//    Shape *s1 = new Circle(5);
//    Shape *s2 = new Rectangle(4, 6);
//
//    cout << "Circle Area: " << s1->area() << endl;
//    cout << "Circle Perimeter : " << s1->perimeter() << endl;
//    cout << "Rectangle Area: " << s2->area() << endl;
//    cout << "Rectangle Perimeter: " << s2->perimeter() << endl;
//
//    delete s1, s2;
//    return 0;
//}

#include <iostream>
#include <vector>
using namespace std;

class Animal {
public:
    virtual void makeSound()=0; 
};

class Dog : public Animal {
public:
    void makeSound() override { cout << "Bark!\n"; }
};

class Cat : public Animal {
public:
    void makeSound() override { cout << "Meow!\n"; }
};

class Cow : public Animal {
public:
    void makeSound() override { cout << "Moo!\n"; }
};

int main() {
    Animal *s1=new Dog(); 
    Animal *s2=new Cat();
    Animal *s3=new Cow();
    
    s1->makeSound();
    s2->makeSound();
    s3->makeSound();
}
