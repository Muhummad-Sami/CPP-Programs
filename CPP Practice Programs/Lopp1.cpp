#include<iostream>
using namespace std;
int main()
{
//	for(int i=1 ; i<=6 ; i++)
//	{
//		for (int j=1; j<=6; j++)
//		{
//			if (i==1 || i==6)
//			{
//				cout<<"*";
//			}
//			else
//			{
//				if (j==1 || j==6)
//				{
//					cout<<"*";
//				}
//				else 
//				{
//					cout<<" ";
//				}
//			}
//		}
//		cout<<endl;
//	}
//	return 0;
//	
   for(int i=0; i<=6; i++)
   {
   	for(int j=0; j<=6; j++)
   	{
   	if(i==0 || i==6)
   	{
   		cout<<"i*";
	   }
	else
	{
		if(j==0 || j==6)
		{
			cout<<"j*";
		}
		else
		{
			cout<<"  ";
		}
		
	} 
	  
   }
    cout<<endl;  
   }















}
