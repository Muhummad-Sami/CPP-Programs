#include <iostream>
#include <string>
using namespace std;
class employee{
	private:
		string name;
		int id;
		int salary;
	public:
		employee(string n,int i,int s)
		{
			name=n;
			id=i;
			salary=s;
		}
		~employee()
		{
			cout<<"Data Destroyed Of :"<<name;
		}
		display()
		{
			cout<<"Name Of Employee: "<<name<<endl;
			cout<<"ID Of The Employee :"<<id<<endl;
			cout<<"Salary Of The Employee :"<<salary<<endl;
		}
		ids(int newid)
		{
			id=newid;
		}
		salaries(int newsalary)
		{
			salary=newsalary;
		}
};
int main()
{
	employee em("Ravi",111,50000);
	em.display();
	cout<<endl;
	cout<<"Updated The Data Of Employee."<<endl;
	em.ids(412);
	em.salaries(70000);
	em.display();
	
}
