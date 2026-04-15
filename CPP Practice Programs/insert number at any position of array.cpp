#include <iostream>
using namespace std;
int main()
{
	int array[10],n,pos,x;
	cout<<"Enter The The Size Of Array : ";
	cin>>n;
	cout<<"Enter The Elements Of Array : "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cout<<"Enter The Position Of The New Element: ";
	cin>>pos;
	cout<<"Enter The New Element : ";
	cin>>x;
	for(int i=n-1; i>pos-1; i--)
	{
		array[i+1]=array[i];
	}
	array[pos-1]=x;
	n++;
	cout<<"The New Elements Of Array : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<endl;
	}
	
}
	
