#include<iostream>
using namespace std;
int main()
{for(int i=1; i<=5; i++)
	{
		for(int j=5; j>=i; j--)
		{
			cout<<" ";
		}
		for(int k=1; k<=i; k++)
		{
			if(k==1 || k==i ||i==5)
			{
				//continue;
				cout<<"* ";
			}
			else
			{
			cout<<"  ";
		}
		}
		cout<<endl;
	}
//inverse
	for(int i=5; i>=1; i--)
	{
		for(int j=5; j>=i; j--)
		{
			cout<<" ";
		}
		for(int k=1; k<=i; k++)
		{
			if(k==1 || k==i ||i==5)
			{
				//continue;
				cout<<"* ";
			}
			else
			{
			cout<<"  ";
		}
		}
		cout<<endl;
	}
}



