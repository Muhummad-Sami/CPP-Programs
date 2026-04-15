#include<iostream>
using namespace std;
int main()
 {
 	// PATTERN 1
// 	for(int a=0; a<=10; a++)
// 	{
// 		cout<<a<<" ";
//	 }
 //   PATTERN 2
//    	for(int a=-5; a<=0; a++)
// 	{
// 		cout<<a<<" ";
//	 }
//
//    for(int i=0; i>=-5; i--)
//    { 
//       cout<<i<<" ";
//	}
   // PATTERN 3
//  for(int l=-5; l<=-3; l++)
//  {
//  	cout<<l<<",";
//  }
//  cout<<" countdown sopped ";
// }
//   
//   BREAK
//   for(int d=-5; d<=0; d++)
// {
// 	if(d==-2)
//	{
// 	 break;
//	 }
//	 cout<<d<<" ,";
// }
//   cout<<" Countdown Stopped !";
//   
//  CONTINUE
//    for (int c=-5; c<=0; c++)
//    {
//    	if(c==-2)
//    	{ 
//    	continue;
//		}
//		cout<<c<<" ,";
//	}
//   
//   task 4
   int num1,num2,sum;
   cout<<"Enter The Num1 :";
   cin>>num1;
   cout<<endl;

   cout<<"Enter The Num2 :";
   cin>>num2;
   cout<<endl;   
   
   for(int i=num1; i<=num2; i++)
   {
   if(i%2!=0)
   {
   	cout<<"The Odd Number is: "<<i<<" ,";
   }
    
    if(i%2==0)
   {
   	cout<<"The Even Number is: "<<i<<" ,";
   }
   
   cout<<" The square of  "<<i<<" is: "<<i*i<<endl;
   sum=sum+(i*i);
   
}
   cout<<"The Sum of square of all even numbers are : "<<sum;

//   task 5

//    int num1,num2,i,sum;
//    cout<<"Enter The 1st Natural Number : ";
//    cin>>num1;
//    cout<<endl;
//    
//    cout<<"Enter The 2nd Natural Number : ";
//    cin>>num2;
//    cout<<endl;
//    
//    for(i=num1; i<=num2; i++)
//    {
//    	if(i%2!=0)
//	  {
//	  	cout<<"The Odd Number Is : "<<i<<endl;
//	  }
//	  
//	  	}
//	  	 cout<<endl;
//	  	 
//	   for(i=num1; i<=num2; i++)
//    {
//    	if(i%2==0)
//	  {
//	  	cout<<"The Even Number Is : "<<i<<endl;
//	  }
//	  
//	  	} 
//	cout<<endl;	
//	  	
//	  	 for(i=num1; i<=num2; i++)
//    {
//    	if(i%2==0)
//	  {
//	  	cout<<"The Square of even number : "<<i<<" is "<<i*i<<endl; 	
//	  }
//	   
//	   	}
//	  	 
//	  	


   }




