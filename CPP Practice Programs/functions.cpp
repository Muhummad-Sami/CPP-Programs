#include<iostream>
using namespace std;
float circle()
{
	float radius;
	float pi=3.14;
	cout<<"Enter The Radius = ";
	cin>>radius;
	return 2*pi*radius;
	
}

float rectangle()
{
    
	float x,y;
	cout<<"Enter The Length of Side = ";
	cin>>x;
    cout<<"Enter The Width of Side = ";
	cin>>y;
	return  x*y;
	
}

float square()
{
	float x;
	cout<<"Enter The Length of Side = ";
	cin>>x;
	return  x*x;
	
}

int main()
{
	char press;
	cout<<"Press c For the Area Of Circle."<<endl;
	cout<<"Press s For the Area Of Square."<<endl;
	cout<<"Press r For the Area Of Rectangle."<<endl;
	cin>>press;
	cout<<endl;
	
	if(press=='c')
	{
		cout<<"The Area Of Circle = "<<circle()<<endl;
	}
    
    else if(press=='s')
	{
		cout<<"The Area Of Square = "<<square()<<endl;
	}	
	
	else if(press=='r')
	{
		cout<<"The Area Of Rectangle = "<< rectangle()<<endl;
	}
	else
	{
		cout<<"Invalid Number. ";
		
		}	
	
	return 0;
	
}
 
  
