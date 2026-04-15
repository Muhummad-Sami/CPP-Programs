#include <iostream>
using namespace std;
int main()
{
	int array[10],i,temp,n;
	cout<<"Enter The size of array: ";
	cin>>n;
	cout<<"Enter the elemnets in the array : ";
	for(int i=0; i<n; i++)
	{
		cin>>array[i];
    }
    
    cout<<"The Sorted Array is :"<<endl;
    
		for(int i=0; i<n; i++)
		{		
		  for(int j=i+1; j<n; j++)
		 {
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
	     }
			cout<<array[i]<<endl;	
		}
		
// Bubble sorting

    
//	int array[10],i,temp,n;
//	cout<<"Enter The size of array: ";
//	cin>>n;
//	cout<<"Enter the elemnets in the array : ";
//	for(int i=0; i<n; i++)
//	{
//		cin>>array[i];
//    }
//    
//    cout<<"The Sorted Array is :"<<endl;
//    
//		for(int i=0; i<n; i++)
//		{		
//		  for(int j=i+1; j<n; j++)
//		 {
//			if(array[i]<array[j])
//			{
//				temp=array[i];
//				array[i]=array[j];
//				array[j]=temp;
//			}
//	     }
//			cout<<array[i]<<endl;	
//		}		
//		
	
	

	
}
