#include <iostream>
using namespace std ;
int main()
{
//	int array[4]={1,2,3,4};
//	cout<<array[3];
	
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int array[n];
	cout<<"Enter the value of arrays: "<<endl;
	for(int i=0;i<=n-1;i++)
	{
		cin>>array[i];
		cout<<"Index: "<<i<<" ,Value: "<<array[i]<<endl;
	}

// Inserted element in the end 

//	int array[10],n,i,x;
//	cout<<"Enter the size of array: ";
//	cin>>n;
//	cout<<"Enter the value of arrays: "<<endl;
//	for(i=0;i<n;i++)
//	{
//		cin>>array[i];
//	}
//	cout<<"Enter The new element to insert in the end: ";
//	cin>>x;
//	array[i]=x;
//	n++;
//	for(i=0; i<n;i++)
//	{
//		cout<<array[i]<<endl;
//		
//	}
//

// Bubble sorting
	
//	int array[10],n,i,temp;
//	cout<<"Enter the size of array: ";
//	cin>>n;
//	cout<<"Enter the value of arrays: "<<endl;
//	for(i=0;i<n;i++)
//	{
//		cin>>array[i];
//	}
//	 cout<<"The Sorted Array is :"<<endl;
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


}
