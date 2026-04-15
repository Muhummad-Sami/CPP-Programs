#include <iostream>
using namespace std;
class A{
	public:
		int* data;
	
	A(int val)
	{
		data=new int;
		*data=val;
	}
	A(const A &obj)
	{
		data=new int;
		*data=*(obj.data);
	}
	~A()
	{
		delete data;
	}
	void show()
	{
		cout<<data<<endl;
		cout<<*data<<endl;
	}
};

int main()
{
	A o(10);
	A oo=o;
	oo.show();
	o.show();
	A a(10);
	a.show();
}
