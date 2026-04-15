#include <iostream>
using namespace std;
int findmin(int arr[],int n)
	{
		int min=arr[0];
	
		for(int i=0; i<n; i++)
		{	
			if(min>arr[i])
			{
			  min=arr[i];
			}  
	    }
	     return min;
     
   	}
int main()
{
   	
	int n;
	cout<<"Enter The size Of Array: ";
	cin>>n;
	int array[n];
	cout<<"Enter The Numbers of Array: ";
	for(int i=0; i<n; i++)
	{
	  cin>>array[i]; 
	}
	cout<<"The Minimum Number Is = "<<findmin(array,n);
}

	

