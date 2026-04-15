#include<iostream>
using namespace std;
int main()

{
	int array[10],n;
	cout<<"Enter The Size Of The Array : ";
	cin>>n;
	cout<<"Enter The Elements Of The array: "<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>array[i];
	}
	// loop for overwrite the index
	for(int i=0; i<n-1; i++)
	{
		array[i]=array[i+1];
	}
	n--;
	cout<<"The Elements Of The array: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<array[i]<<endl;
	}
	
}
