#include<iostream>
using namespace std;
class base{
	public:
		int varbase;
	display()
	{
		cout<<"base class variable "<<varbase<<endl;
	}
};
class derived:public base{
	public:
		int varderived;
	display()
	{
		cout<<"base class variable "<<varbase<<endl;
		cout<<"derived class variable "<<varderived<<endl;
	}
	
};
int main()
{
	base *baseptr;
	base obj1;
	derived obj2;
	baseptr = & obj2;
	baseptr->varbase =30;
	baseptr->display();
	
	derived *derivedptr;
	derivedptr= &obj2;
	derivedptr->varderived =10;
	derivedptr->display();
	
}
