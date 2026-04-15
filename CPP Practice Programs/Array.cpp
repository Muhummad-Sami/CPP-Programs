#include<iostream>
using namespace std;
int main()
{	
//   cout<<"Enter The Age :";
//   int arr[10];
//   for(int i=0; i<10;i++)
//   {
//   	cin>>arr[i];
//   }
//   for(int j=0;j<10;j++)
//   {
//   	int age=arr[j];
//   	
//   	if(age>0 && age<10)
//   	{
//   		cout<<"Kids"<<endl;
//	}
//	else if(age>10 && age<20)
//   	{
//   		cout<<"Teen"<<endl;
//	}
//	else if(age>20 && age<30)
//   	{
//   		cout<<"Adult"<<endl;
//	}
//	else if(age>30 && age<40)
//   	{
//   		cout<<"Old"<<endl;
//	}
//	else
//	{
//		cout<<"Senior."<<endl;
//	}
//   	
//   }
   
   cout<<"Enter the Emploees Salary : "<<endl;
   int salary[20];
   for(int i=0;i<20;i++)
   {
   	cin>>salary[i];
   }
   for(int j=0;j<20;j++)
   {
   	int post=salary[j];
   	
   	if(post>=50000 && post<=100000)
   	{
   		cout<<"Developer."<<endl;
	}
	else if(post>=100000 && post<=150000)
	{
		cout<<"Senior."<<endl;
	}
	else if(post>=150000 && post<=200000)
	{
		cout<<"Architect."<<endl;
	}
	else if(post>200000)
	{
		cout<<"Project Manager"<<endl;
	}
	else
	{
		cout<<"Invalid Post!!";
	}
	
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   

}
