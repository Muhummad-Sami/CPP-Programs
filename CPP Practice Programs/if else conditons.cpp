#include<iostream>
using namespace std;
int main()
{
	int grade,salary,bonus;
	cout<<"Enter the salary : ";
	cin>>salary;
	cout<<endl;
	cout<<"Enter the Grade : ";
	cin>>grade;
	cout<<endl;
	
	if(grade<=15)
	{
		cout<<"50% Bonus Added : ";
		bonus=salary+(salary/2);
		cout<<bonus<<endl;
	}
	else if(grade>15<20)
	{
		cout<<"25% Bonus Added : ";
		bonus=salary+(salary/3);
		cout<<bonus<<endl;	
	}
	else
	{
		cout<<"Salary Remain Same : ";
		cout<<salary;
	}
//	return 0;
	
}
