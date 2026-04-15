#include <iostream>
using namespace std;
int swap(int* num1,int* num2)
{
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
	
}
int main()
{
	int n,m;
	cout<<"Enter The Number: ";
	cin>>n;
	cout<<"Enter The Number: ";
	cin>>m;
	cout<<"Before Swap Number1 = "<<n<< "  Number2 = "<<m<<endl;
	swap(&n,&m);
	cout<<"After Swap Number1 = "<<n<< "  Number2 = "<<m<<endl;
	
}
