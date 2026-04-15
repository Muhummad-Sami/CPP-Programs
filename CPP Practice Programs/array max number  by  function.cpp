#include<iostream>
using namespace std;
int findmax(int arr[],int n);
int main()
{
	int n;
	cout<<"Enter The Size of Array: ";
	cin>>n;
	int  array[n];
	cout<<"Enter The Numbers Of Array: ";
	for(int i=0; i<n;i++)
	{
		cin>>array[i];
	}
	cout<<"The Maximum Number Is : "<<findmax(array,n);
	return 0;
}
    int findmax(int arr[],int n)
    {
    	int max=arr[0];
    	for(int i=0;i<n;i++)
    	{
    		if(max<arr[i])
    		{
    			max=arr[i];
			}
		}
		return max;
    	
	}
