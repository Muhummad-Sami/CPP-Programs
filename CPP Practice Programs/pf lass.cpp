#include <iostream>
using namespace  std;
int main()
{
//	// 1st pattern
//	
//  for(int r=0; r<=5; r++)
//  {
//  	for(int s=0; s<=5-r; s++)
//	  {
//	  	cout<<" ";
//	  }
//	for(int c=0; c<=r*2-0; c++ )
//	{
//		cout<<"*";
//	  }  
//   cout<<endl;	  
//  }	
//  // 2nd pattern
//   
//  for(int r=4; r>=0; r--)
//  {
//  	for(int s=0; s<=5-r; s++)
//  	{
//  		cout<<" ";	
//	  }
//	for(int c=0; c<=r*2-0; c++)  
//	{
//		cout<<"*";
//	}
//	   cout<<endl;
//   }
// 
   
//   for(int i=0; i<=6; i++)
//   {
//   	for(int j=0; j<=i; j++)
//   	{
//   		cout<<"*";
//	   }
//	  cout<<endl; 
//   }
//   
//   for(int a=5; a>=0; a--)
//   {
//   	for(int b=0; b<=a; b++)
//   	{
//   		cout<<"*";
//	   }
//	  cout<<endl; 
//   }

//  
//  for(int i=0; i<=5; i++)
//  {
//  	for(int j=0; j<=5; j++ )
//  	{
//  		if(j>=i)
//		  {
//		  	cout<<"*";
//		  }
//		else
//		{
//			cout<<" ";
//		  }  
//	  }
//	  cout<<endl;
//  }
  
  int i=1, num;
  cout<<" Enter the Number : ";
  cin>>num;
  cout<<endl;
  
  while(i<=10)
  {
  	cout<<num<<" x "<<i<<" = "<<num*i<<endl;
  	i++;
  }
  return 0;
  
  
  
  
  
  
  
  
  
  
  
}
