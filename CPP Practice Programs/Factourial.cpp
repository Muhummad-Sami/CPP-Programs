#include <iostream>
using namespace  std;
int main()
{
//	int i=1, num;
//	cout<<"Enter The Number :";
//	cin>>num;
//	cout<<endl;
//	
//	while(i<=10)
//	{
//		cout<<num<<" x "<<i<<" = "<<num*i<<endl;
//		i++;
//	}
//	return 0;

//   int num,fact=1;
//   cout<<"Enter A Positive Number : ";
//   cin>>num;
//   cout<<endl;
//    
//    int i=1;
//   while(i<=num )
//   {
//   fact=fact*i; 	
//   	i++;
//   }
//   cout<<"The Fatorial of "<<num <<" is = "<<fact <<endl;
//
//   return 0;

	int fact=1,num;
	cout<<"Enter The number: ";
	cin>>num;
	for(int i=num;i>=1;i--)
	{
		fact*=i;
	}
	cout<<"The Facturial Is : "<<fact;



}

