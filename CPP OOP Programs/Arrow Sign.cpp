#include <iostream >
#include <string>
using namespace std;
class company{
	public:
		string name;
		int year;
		
	display()
	{
		cout<<"The name of the company is :"<<this->name<<endl;
		cout<<"The Making Year Of the company :"<<year;
	}
};
int main()
{
	company *obj=new company();//Dynamic memory allocation
	obj->name="Tesla.";
	obj->year=1970;
	obj->display();//arrow sign use 
	
	delete obj;
	
}

