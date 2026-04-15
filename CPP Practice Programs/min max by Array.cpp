#include <iostream>
using namespace std;
int main()
{
	int array[6];
	int min;
	cout<<"Enter The Numbers: "<<endl;
	for(int i=0; i<6; i++)
	{
	  cin>>array[i]; 
	}
	min=array[0];
	for(int i=0; i<6; i++)
	{	
		if(min>array[i])
		{
		  min=array[i];
		}  
    }
	cout<<"The Minimum Number Is = ";
	cout<<min;
	
//	int array[6];
//	int max;
//	cout<<"Enter The Numbers: ";
//	for(int i=0; i<6; i++)
//	
//	{
//		cin>>array[i];
//	}
//	
//	max=array[0];
//	
//	for(int i=0; i<6; i++)
//	{
//		if(max<array[i])
//		{
//			max=array[i];
//		}
//		
//	}
//	cout<<"The Maximum Number Is = ";
//	cout<<max;
}




















