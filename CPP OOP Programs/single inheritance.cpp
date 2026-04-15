//// task 1
//#include <iostream>
//#include<string>
//using namespace std;
//class base{
//	public:
//		string name;
//		int year;
//	base()
//	{
//		name="Xspace";
//		year=1970;
//		cout<<"The Name Of the company Is: "<<name<<endl;
//		cout<<"The Making Year Of the company Is :"<<year;
//	}
//};
//
//class derived:private base{
//		public:
//			
//		
//			
//	};
//int main()
//{
//	derived obj;
//	
//}

//// task 2

#include <iostream>
#include <string>
using namespace std;
//Base class
class base{
	public:
		string name;
		int id;
		int year;
	
	base()
	{
		name="Ali";
		id=111;
		year=2000;
		}	
	
	void fun()
	{
		cout<<"The Name Of the employye is :"<<name<<endl;
		cout<<"The Id Of the Employee Is :"<<id<<endl;
		cout<<"The Joining Year Of the Employee Is :"<<year<<endl;
		
	}
};

//Derived Class
class derived:public base{
	private:
		int salary;
	public:
		
	derived(){
		salary=50000;
	}
	int done()
	{
		cout<<"The Salary Of the Employye is: "<<salary;
		return salary;
	}
};

int main()
{
	derived obj;
	obj.fun();
	obj.done();
}















