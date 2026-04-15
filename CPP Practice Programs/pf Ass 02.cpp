#include<iostream>
using namespace std;
int main()
{
	int num1;
	cout<<"User Enter The Number : ";
	cin>>num1;
	cout<<endl<<endl;
	
	if(num1>0)
	{
		cout<<num1<<" is a positive Number ";
	}
	else if(num1<0)
	{
		cout<<num1<<" is a Negative Number ";
	}
	else
	{
		cout<<" Invalid Number ";
	}
	return 0;
	
	
}
