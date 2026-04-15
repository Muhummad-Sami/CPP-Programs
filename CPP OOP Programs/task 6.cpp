#include <iostream>
using namespace std;
class shape{
	protected:
		string color;
	
	public:
		setColor(string)
		{
			cout<<"Enter The Color: ";
			cin>>color;
		}
		DisplayColor()
		{
			cout<<"Color : "<<color<<endl;
		}
	
};
class circle:public shape{
	public:
		float radius;
		float pi=3.14;
		float area;
	
	setRadius(float)
	{
		cout<<"Enter The Radius of circle: ";
		cin>>radius;
		
	}
	displayArea()
	{
		cout<<"Area Of The Circle : ";
		cout<<pi*radius*radius;
		cout<<endl<<endl; 
	}
};
class rectangle:public shape{
	public:
		float length,width;
		
	setDimension(float,float)
	{
		cout<<"Enter The Length : ";
		cin>>length;
		cout<<"Enter The Width : ";
		cin>>width;
		
	}
	displayArea()
	{
		cout<<"Area Of Rectangle : ";
		cout<<length*width<<endl;
		
		
	}
};

int main()
{
	circle obj1;
	rectangle obj2;
	float r,l,w;
	string c;
	obj1.setColor(c);
	obj1.setRadius(r);
	cout<<endl<<"The Color And Radius Of Circle."<<endl<<endl;
	obj1.DisplayColor();
	obj1.displayArea();
	obj2.setColor(c);
	obj2.setDimension(l,w);
	cout<<endl<<"The Color And Radius Of rectangle."<<endl<<endl;
	obj2.DisplayColor();
	obj2.displayArea();
	
}
