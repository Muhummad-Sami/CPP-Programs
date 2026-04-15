#include<iostream>
#include<string>
using namespace std;
class A{
	public:
		string name;
		int age;
		
	// default constructor

	A()
	{
		name="sami";
		age= 18;
		cout<<"Default constructor"<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
	}	
	//  paramitrized constructor
	A(string n,int a):name(n),age(a)
	{
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter Age: ";
		cin>>age;
		cout<<endl;
		cout<<"Paramitrized constructor"<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		
	}
	// copy constructor
	A(const A &obj)
	{
		name=obj.name;
		age=obj.age;
		cout<<"copy constructor"<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		
	}
	
};

int main()
{
	string a;
	int b;
	A obj;
	A obj1(a,b);
	A obj2=obj1;
	
	
}
