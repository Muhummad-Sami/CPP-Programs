#include<iostream>
using namespace std;
int main()
{
	string regname,regpass,loginname,loginpass;
	cout<<"\t ********* Register Yourself *********"<<endl<<endl;
	cout<<"Enter Your Name : ";
	getline(cin,regname);
	cout<<"Enter Your Password: ";
	getline(cin,regpass);
	cout<<endl<<"\t  ********* Registered Successfully!! *********."<<endl<<endl;
	
	cout<<"\t ********* Login Yourself *********"<<endl<<endl;
	cout<<"Enter Your Name : ";
	getline(cin,loginname);
	cout<<"Enter Your Password: ";
	getline(cin,loginpass);
	cout<<endl<<endl;
	
	
	
	if(regname==loginname && regpass==loginpass)
	{
	 cout<<"\t ********* Logged In Successfully!! *********"<<endl<<endl;
	}
	else
	{
	int attempts=3;
	do
	{
			
		cout<<"\t ********* Remainning Attempts "<<attempts<<" *********"<<endl<<endl;
		
		if (regname != loginname )
		{
		cout<<"You Enterd The Wrong User Name."<<endl<<endl;
		}
		else if (regpass != loginpass ) 
		{
		cout<<"You Enterd The Wrong password."<<endl<<endl;
		}
		else
		{
		 cout<<"\t ********* Logged In Successfully!! *********"<<endl<<endl;
		}
//		if(attempts>0)
//		{	cout<<"Enter Your Name : ";
//	    	getline(cin,loginname);
//		    cout<<"Enter Your Password: ";
//			getline(cin,loginpass);
//		}
		
		attempts--;
	}
		while(regname!=loginname && regpass!=loginpass);
		
	
		
	}
	
}
