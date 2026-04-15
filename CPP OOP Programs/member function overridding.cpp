#include<iostream>
using namespace std;
class base{
	public:
		virtual void show()
		{
			cout<<"Base Class called!! ";			
		}
};
class derived :public base{
	public:
		void show() override
		{
			cout<<"derived class called!!";
		}
};
int main()
{
	// simple object
//	derived obj;
//	obj.show();	
	
	// Base class pointer to derived object
	base* obj=new derived;
	obj->show();
}
