#include<iostream>
using namespace std;
int main()
{
	for(int i=1; i<=4; i++)
	{
		for(int j=5; j>=i; j--)
		{
			cout<<" ";
		}
		for(int k=1; k<=i; k++)
		{
			if(i==3 && k==2)
			{
				cout<<"2 ";
			}
			else if(i==4 && (k==2 || k==3))
			{
				cout<<"3 ";
			}
			else
			{
			cout<<"1 ";
		}
		}
		cout<<endl;
	}
}
