#include<iostream>
using namespace std;
int main()
{
	int array[10],n,x,i;
	cout<<"Enter The Size Of The array: ";
	cin>>n;
	cout<<"Enter The Elements of The Array : "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>array[i];
	}
	n--;
	cout<<"The Element Deleted At The end: "<<endl;
	for( i=0; i<n; i++)
	{
		cout<<array[i]<<endl;
	}
	cout<<"Enter New element To Add At The End Of Array : ";
	cin>>x;
	array[i]=x;
	n++;
	cout<<"The new Element Added At The end: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<array[i]<<endl;
	}
	
	
}
