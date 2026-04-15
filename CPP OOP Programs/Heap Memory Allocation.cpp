#include <iostream>
#include <string>
using namespace std;
class box{
	public:
		string name;
		int length;
		float width;
		
		box(string n,int l,float w):name(n),length(l),width(w){
			
		}
		display()
		{
			cout<<"The Name of the Box Is : "<<name<<endl;
			cout<<"The Length of the Box Is : "<<length<<endl;
			cout<<"The Width of the Box Is : "<<width<<endl;
			
		}
};
int main()
{
	string Name;
	int Length;
	float Width;
	cout<<"Enter The Name : ";
	cin>>Name;
	cout<<"Enter The Length : ";
	cin>>Length;
	cout<<"Enter The Width : ";
	cin>>Width;
	
	box *obj=new box (Name,Length,Width);
	obj->display();
	delete obj;
	
	
}
