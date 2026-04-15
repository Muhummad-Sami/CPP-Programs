#include<iostream>
using namespace std;
int main()
{
	int array[10],n,x,i;
	cout<<"Enter The Size Of The Array :";
	cin>>n;
	cout<<"Enter The Elemets Of the array : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>array[i];
	}
	cout<<"Enter The New Element : ";
	cin>>x;
	array[i]=x;
	n++;
	cout<<"The New Elements of array : "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<array[i]<<endl;
	}
	
}
