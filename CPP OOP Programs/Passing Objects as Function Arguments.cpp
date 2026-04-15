#include <iostream>
#include <iostream>
using namespace std;
class inputs{
	public:
		int length;
		int width;
	
	inputs(int l,int w):length(l),width(w){}//parametrized
	
	// default
	display()
	{
		cout<<"The Length Is :"<<this->length<<endl;
		cout<<"The Width Is :"<<width<<endl;
	}
	
};
//passing object as function arrgument by referance
	int inlength(inputs &obj1)
	{
		obj1.length*=2;
		obj1.width+=10;
	}

int main()
{

	// dynamic memory allocation
	inputs *obj1=new inputs(10,20);
	obj1->display();
	cout<<endl;
	
	
	cout<<endl;
	inlength(*obj1);
	obj1->display();
	cout<<endl;
	
	delete obj1;
}
