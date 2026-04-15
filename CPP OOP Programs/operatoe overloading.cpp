#include<iostream>
using namespace std;
//class point{
//	public:
//		int x,y;
//	
//	point()
//	{
//		x=0;
//		y=0;
//	}
//	point(int x,int y):x(x),y(y)
//	{
//		
//	}
//	point operator+(const point &other)
//	{
//		return 
//	}
//	
//};
//int main()
//{
//	
//}

class Base {
public:
    void display() {
        cout << "Display of Base\n";
    }
};

class Derived : public Base {
public:
	using Base::display;
    void display(int x) {  // overloaded, not overridden
        cout << "Display of Derived: " << x << endl;
    }
};

int main() {
    Derived d;
    d.display();     // ? Error in some compilers: Base version hidden
    d.display(5);    // ? Derived version
}

