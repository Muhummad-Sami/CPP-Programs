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
	cout<<"Enter A number To search in Array: ";
	cin>>x;
	
	for(i=0; i<n; i++)
	{
		if(array[i]==x)
		{
			cout<<x<<" Element Found On Index "<<i;
			break;
		}
	
	}
	if(array[i]!=x)
	{
		cout<<"Element Is not Found In Array!";
	} 
	
	

}	
	
