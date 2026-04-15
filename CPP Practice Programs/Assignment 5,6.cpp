#include<iostream>
using namespace std;
int main()
{
//	for(int i=-5; i<=0; i++)
//	{
//		cout<<i<<",";
//	}
//// Part 1
//    cout<<endl;	
//	for(int j=-5; j<=0; j++)
//	{
//		if(j==-2)
//		{
//			break;
//		}
//		cout<<j<<",";
//	}
////part 2
//    cout<<endl;
//    for(int l=-5; l<=0; l++)
//	{
//		if(l==-2)
//		{
//			continue;
//		}
//		cout<<l<<",";
//	}	



//  int num1,num2,i,sum,even;
//  
//  cout<<"Enter The Firstnum : ";
//  cin>>num1;
//  cout<<endl;
//  
//  cout<<"Enter The Secondnum : ";
//  cin>>num2;
//  cout<<endl;
//
//// ODD NUMBERS  
//  cout<<"These Are Odd Numbers: ";  
//  for(i=num1; i<=num2; i++) 
//  {
//  	if(i%2!=0)
//  	{
//  	  cout<<i<<", ";	
//	}
//  }
//
//// Even Numbers 
//  cout<<endl; 
//  cout<<"These Are Even Numbers: ";  
//  for(i=num1; i<=num2; i++) 
//  {
//  	if(i%2==0)
//  	{
//  	  cout<<i<<", ";	
//	}
//  }
//  cout<<endl;
//  
//// Output the sum of all odd numbers between firstNum and secondNum
//    int oddSum = 0 ;
//    for (i=num1; i<=num2; i++) 
//	{
//     if(i%2!=0)
//	 {
//      oddSum += i;
//     }
//    }
//    cout << "Sum of odd numbers between " << num1<< " and " << num2 << ": " << oddSum << endl;   
//   
//   
//  
//// Output the sum of all even numbers between firstNum and secondNum
//    int evenSum = 0;
//    for (i=num1; i<=num2; i++) 
//	{
//     if(i%2==0)
//	 {
//      evenSum += i;
//     }
//    }
//    cout << "Sum of even numbers between " << num1<< " and " << num2 << ": " << evenSum << endl<<endl;
//    
//// Output numbers and their squares between firstNum and secondNum
//   cout << "Square of the Number Between " << num1<< " and " << num2 <<  endl;
//   for(i=num1; i<=num2; i++)
//   {
//   	cout<<i<<"-> "<<(i*i)<<endl;
//   }
//   
//// Output the sum of the squares of the odd numbers between firstNum and secondNum
//   cout<<endl;
//   int oddsqrsum=0;
//   for (i=num1; i<=num2; i++) 
//	{
//     if(i%2!=0)
//	 {
//	 	oddsqrsum+=(i*i);
//     }
//    }
//  cout<<"Sum of the squares of the odd numbers between "<<num1<<" and "<<num2<<": "<<oddsqrsum << endl;
//
//      int n;
//      cout<<"Enter upper Limits :";
//      cin>>n;
//      cout<<endl;
//// Series 1      
//      cout<<"Series 1 :";
//      for(int i=1; i<=n; i*=3)
//      {
//      	cout<<i<<" ";
//	  }
//      cout<<endl;
//// Series 2      
//      cout<<"Series 2 :";
//   
//      for(int i=1; i<=n; i++)
//      {
//      	if(i%4==0)
//      	{
//      		cout<<"0 ";
//		}
//		else
//		{
//			cout<<i<<" ";
//		}
//	  }
//	  cout<<endl;
// 

//    int num;
//    cout<<" Enter The Number For table : ";
//	cin>>num;
//	cout<<endl;
//	
//	int i;
//	for(i=1; i<=10; i++)
//	{
//		cout<<num<<" x "<<i<<" = "<<num*i<<endl;
//	 } 
//     
//  int num;
//  cout<<"Enter Number : ";
//  cin>>num;
//  cout<<endl;
//   int row,col,spa;
//// Loop for row   
//   for(row=0; row<=num; row++)
//   {
//// Loop For Space 
//   for(spa=0; spa<=num-row; spa++)
//   {
//   	cout<<" ";
//   }
//// loop for Star
//   for(col=0; col<=2*row-0; col++)
//   {
//   	cout<<"*";
//	}
//      	cout<<endl; 	
//   }
//
////2nd pattern
//
//  for(row=num-0; row>=0; row-- )
//  {
//// print space
//   for(spa=0; spa<=num-row; spa++) 
//   {
//   	cout<<" ";
//   } 
//// print star
//   for(col=0; col<=2*row-0; col++)
//   {
//   	cout<<"*";
//   } 
//   cout<<endl;  	
//	 }   
//   
 
//    int num,fact=1;
//    cout<<"Enter The Number : ";
//    cin>>num;
//    cout<<endl;
//    
//    int i=1;
//    while(i<=num)
//    {
//    	fact=fact*i;
//    	i++;
//	}
//	cout<<"The Factorial Of "<<num<<" is = "<<fact<<endl;
//    
//    for(int i=0; i<=4; i++)
//    {
//    	for(int j=0; j<=i; j++)
//    	{
//    		cout<<"*";
//		}
//	cout<<endl;	
//	}
//	
	
//   for(int l=1; l<=4; l++)
//   {
//   	for(int k=1; k<=l; k++)
//   	{ 
//	   cout<<k;
//	}
//	cout<<endl;
//   }
//  
//    
 
// for(int l=0; l<=4; l++)
// {
// 	for(int p=0; p<=l; p++)
// 	{ 
// 	  cout<<l;
//	 }
//	 cout<<endl;
// }
//  

//   int n,sum=0;
//   cout<<"Enter The Number : ";
//   cin>>n;
//   cout<<endl;
//   
//   cout<<"Even Natural Number Up to "<<n<<" terms : ";
//   for(int i=1; i<=n; i++)
//   {
//   	int evennum = 2*i;
//   	cout<<evennum<<" ";
//   	sum=sum+evennum;
//   }
//   cout<<endl<<endl;
//   cout<<"The Sum Of All The Even Number Is : "<<sum<<endl;
//   return 0;

//    int num,largest = INT_MIN,smallest =  INT_MAX;
//    cout<<"Enter The Series of integers (-99 to stop) : ";
//    
//    while(true)
//    {
//    	cin>>num;
//    	
//    	if(num==-99)
//    	break;
//    	
//    	if(num>largest)
//    	largest=num;
//    	
//    	if(num<smallest)
//    	smallest=num;
//	}
//	
//	if(largest == INT_MIN && smallest == INT_MAX)
//	{
//		cout<<"No Numbers Entered."<<endl;
//	}
//	else
//	cout<<"Largest Number Is : "<<largest<<endl;
//    cout<<"Smallest Number Is : "<<smallest<<endl; 
//	
//	return 0; 
















}
  

