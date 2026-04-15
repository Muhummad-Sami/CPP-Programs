#include <iostream>
#include <string>
using namespace std;
class person{
	public:
		string name;
		int age;
	
	int setDetails(string,int)
	{
		cout<<"Enter The Person Details."<<endl;
		cout<<"Enter the Name of Person: ";
		cin>>name;
		cout<<"Enter the Age of The Person: " ;
		cin>>age;
		cout<<endl<<endl;		
	}
	int showDetails()
	{
		cout<<"Show Details of Person."<<endl; 
		cout<<"The Name Of the Person Is "<<name<<endl;
		cout<<"The Age Of the Person Is "<<age<<endl<<endl;		
	}
};

class empyloo:public person{
	public :
		int id;
		string Depart;
	
	int epDetails(int,string)
	{
		cout<<"Enter The Employee Details."<<endl;
		cout<<"The Id Of the Employee ";
		cin>>id;
		cout<<"The Department Of the Employee Is ";
		cin>>Depart;
		cout<<endl<<endl;		
	}
	int showepDetails()
	{
		cout<<"Show Details Of the Empyloo."<<endl;
		cout<<"The Id Of the Employee is: "<<id<<endl;
		cout<<"The Department Of the Employee Is: "<<Depart<<endl<<endl;		
	}
};
int main()
{
	string n,d;
	int a,i;
	empyloo obj;
	obj.setDetails(n,a);
	obj.showDetails();
	obj.epDetails(i,d);
	obj.showepDetails();
}
