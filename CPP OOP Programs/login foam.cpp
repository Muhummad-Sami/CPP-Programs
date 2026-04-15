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
		for(int i=3; i>=1; i--)
		{
			
		    if(regname!=loginname || regpass!=loginpass)
				{
					cout<<"\t ********* Remainning Attempts "<<i<<" *********"<<endl<<endl;		
				}
				
			if(regname!=loginname && regpass!=loginpass)
				{
				cout<<"You Entered The Wrong user name and password!!"<<endl<<endl;
				cout<<"Enter Your Name : ";
		    	getline(cin,loginname);
			    cout<<"Enter Your Password: ";
				getline(cin,loginpass);
				cout<<endl<<endl;
				}
					
			else if (regname != loginname )
				{
				cout<<"You Enterd The Wrong User Name."<<endl<<endl;
				cout<<"Enter Your Name : ";
		    	getline(cin,loginname);
			    cout<<"Enter Your Password: ";
				getline(cin,loginpass);
				cout<<endl<<endl;
				}
				
			else if(regpass != loginpass)
				{
				cout<<"You Enterd The Wrong password."<<endl<<endl;
				cout<<"Enter Your Name : ";
		    	getline(cin,loginname);
			    cout<<"Enter Your Password: ";
				getline(cin,loginpass);
				cout<<endl<<endl;
				}
		
		 }
		 
		if(regname==loginname && regpass==loginpass)
			{
				cout<<"You Entered the Correct User Name OR Password !!"<<endl<<endl;
				cout<<"\t ********* Logged In Successfully!! *********"<<endl<<endl;
			}	
		else
			{
				cout<<"Sorry, You Have no more Attempts !!";
			}
	}

}
