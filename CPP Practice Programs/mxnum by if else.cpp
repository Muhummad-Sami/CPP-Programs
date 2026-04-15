#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3,n4,n5;
	cout<<"Enter Five Numbers : " <<endl;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	cin>>n4;
	cin>>n5;
	if(n1>n2 && n1>n3 && n1>n4 && n1>n5)
	{
	     	cout<<n1<<" IS Greater Then Other Number : ";
	}
	else if(n2>n1 && n2>n3 && n2>n4 && n2>n5)
	{
			cout<<n2<<" IS Greater Then Other Number : ";
	}
	else if(n3>n1 && n3>n2 && n3>n4 && n3>n5)
	{
			cout<<n3<<" IS Greater Then Other Number : ";
	}
	else if(n4>n1 && n4>n2 && n4>n3 && n4>n5)
	{
			cout<<n4<<" IS Greater Then Other Number : ";
	}
	else
	{
			cout<<n5<<" IS Greater Then Other Number : ";
	}
	
}
