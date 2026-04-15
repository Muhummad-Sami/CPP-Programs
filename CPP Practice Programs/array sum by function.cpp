#include <iostream>
using namespace std;
int findsum(int arr[],int n);

int main() 
{
   int array[20],n;
   cout<<"Enter the Size of array less then 20: ";
   cin>>n;
   cout<<"The Sum Of Number of array: "<<findsum(array,n);

}
int findsum(int arr[],int n)
{
	int sum=0;
	int array[20];
	cout<<"Enter The Number Of array: ";
   	for(int i=0; i<n;i++)
	   {
	   	cin>>array[i];
	   	sum +=array[i];
	   }
	return sum;   
	   
	
}


