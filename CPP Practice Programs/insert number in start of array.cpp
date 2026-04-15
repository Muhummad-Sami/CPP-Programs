#include <iostream>
using namespace std;
int main()
{
	int array[10],n,x;
	cout <<"Enter the Size of Array: ";
	cin>>n;
	cout<<"Enter The Elements of array: "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>array[i];
	}
	cout<<"Enter The New Element: ";
	cin>>x;
	for(int i=n; i>0; i--)
	{
		array[i]=array[i-1];
	}
	array[0]=x;
	n++;
	cout<<"Array elements are: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<array[i]<<endl;
	}
}
