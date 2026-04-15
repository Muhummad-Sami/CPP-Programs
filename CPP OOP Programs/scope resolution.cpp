#include<iostream>
#include<string>
using namespace std;
class rectangle{
	public:
		float length;
		float width;
	
	float inputs(float l,float w);
	float display();
};
// scope resolution
	float rectangle::inputs(float l,float w)
	{
		length=l;
		width=w;
	}
	float rectangle::display()
	{
		return length*width;
		
	}
int main()
{
	float la,wi;
	cout<<"Enter The Length :";
	cin>>la;
	cout<<endl;
	cout<<"Enter The Width :";
	cin>>wi;
	cout<<endl;
	rectangle obj;
	obj.inputs(la,wi);
	cout<<"The Area Of the Rectangle Is :"<<obj.display();
	
	}	
