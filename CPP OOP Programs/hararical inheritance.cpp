#include <iostream>
#include <string>
using namespace std;
class shape{
	protected:
		string color;
	public:
	void setcolor()
		{
			color="Red";		
		}
	void displayColor()
		{
			cout<<"The Color of the circle Is "<<color;
			cout<<endl<<endl;	
		}
	
};
class circle:public shape{
	public:
		float radius;
		float pi=3.14;
		
	float setRadius(float radius)
	{
		cout<<endl<<"Circle"<<endl;
		cout<<"Enter The Radius: ";
		cin>>radius;
		cout<<"The Area Of the Circle Is: ";
		cout<<2*pi*radius;
		cout<<endl<<endl;		
	}
	
};

class rectangle:public shape{
	public:
		float length;
		float width;
	
	int setDimension(float length,float width)	
	{
		cout<<endl<<"Rectangle"<<endl;
		cout<<"Enter the Length Of The Rectangle: ";
		cin>>length;
		cout<<"Enter the Width Of The Rectangle: ";
		cin>>width;
		cout<<endl;
		cout<<"The Area of The Rectangle Is: ";
		cout<<length*width;		
	}
	
};

int main()
{
	float r,l,w;
	shape obj;
	obj.setcolor();
	obj.displayColor();
	circle obj1;
	obj1.setRadius(r);
	rectangle obj2;
	obj2.setDimension(l,w);
	
}
