#include<iostream>
using namespace std;

class emplyo{
	private:
	//data member
	int salary;
		
	//function
	public:

	k(int m,int l)
	{
		cout<<"m= "<<m;
		cout<<endl;
		cout<<"l= "<<l;
		cout<<endl;
	}

	set()
	{
		cout<<"the salary is : ";
		salary=50000;
		cout<<salary;//private specifier is use in only inside the class function
	
	}
};

int main()
{
	emplyo obj;
	int m,l;
	cout<<"Enter M: ";
	cin>>m;
	cout<<endl;
	cout<<"Enter L: ";
	cin>>l;
	cout<<endl;
	obj.k(m,l);//Public specifier can use outside the class
	obj.set();
	
	//cout<<obj.salary; this is not use outside the class because it is private

	
}
