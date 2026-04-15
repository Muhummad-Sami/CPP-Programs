#include <iostream>
using namespace std;
int main()
{
	
	int n,sum=0;
	cout<<"Enter The SiZe Of Array: ";
	cin>>n;
	int numbers[n];
	cout<<"Enter The Value In Array: ";
	for( int i=0; i<n; i++)
	{
		cin>>numbers[i];
	}
	for(int i=0;i<n;i++)
	{
		sum +=numbers[i];
	}
	cout<<"The Sum Of The Values Of Array: "<<sum<<endl;
	
	for(int i=0; i<n; i++)
	{
		cout<<"The Value Of Array is : ";
		cout <<numbers[i]<<endl;
	}
	cout<<endl<<endl;
	
	
	int en ;
	cout<<"Enter The SiZe Of Array: ";
	cin>>en;
	int doublenumbers[en];
	cout<<"Enter The Value In Array: ";
	for( int i=0; i<en; i++)
	{
		cin>>doublenumbers[i];
	}
	for(int i=0; i<en; i++)
	{
		cout <<"And The Double Of Values is : "<<doublenumbers[i]*2<<endl;
	}
	cout<<endl<<endl;
	
	cout<<"Original     Doubled "<<endl;
	for(int i=0; i<en; i++)
	{
		cout <<doublenumbers[i]<<"\t\t"<<doublenumbers[i]*2<<endl;
	}
	
}
