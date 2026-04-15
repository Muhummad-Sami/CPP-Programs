#include<iostream>
using namespace std;
class base{
	public:
		void show()
		{
			cout<<"Base Class called!! ";			
		}
};
class derived :public base{
	public:
		void show() 
		{
			cout<<"derived class called!!";
		}
};
int main()
{

	
	base* obj=new derived;// Base class pointer to derived object
	obj->show();// Calls Base class function (Static binding)

}
