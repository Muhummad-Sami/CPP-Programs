#include<iostream>
#include<cmath>
using namespace std;

int square(int num)
{
	cout<<"Enter The Number : ";
	cin>>num;
	return num*num;
 
 
}
void arthimaticopr(int num1, int num2)
{
	int press;
	cout<<"Press 1 for Addition."<<endl;
    cout<<"Press 2 for Subtration."<<endl;
	cout<<"Press 3 for Division."<<endl;
	cout<<"Press 4 for Multiple."<<endl;
	cin>>press;
	switch(press)
	{
		case 1:
		cout<<"The Sum Of Numbers Is = "<<num1 + num2 <<endl;
		break;
		case 2:
		cout<<"The SubTration Of Numbers Is = "<<num1 - num2 <<endl;
		break;
		case 3:
		cout<<"The Division Of Numbers Is = "<<num1 / num2 <<endl;
		if(num2==0)
		{
			cout<<"Invalid Number.";
		}
		else
		{
			num1/num2;
		}
		break;
		case 4:
		cout<<"The Product Of Numbers Is = "<<num1 * num2 <<endl;
		break;
		default:
		cout<<"Invalid Number."<<endl;
			
	}
}
int main()
{ 
    int choice,num,num1,num2,maxnum;
 do{
  
	cout<<"Press 1 for Square of Number."<<endl;
	cout<<"Press 2 for For Arthimatic operations."<<endl;
	cout<<"Enter 0 For Exiting The Program."<<endl;
	cin>>choice;

    switch(choice)
    {
    	case 1:
    	cout<<"The Square Of Number Is = "<<square(num);
    	break;
    	
    	case 2:
    	cout<<"Enter The 1st Number = ";
		cin>>num1;
		cout<<endl;
		cout<<"Enter The 2nd Number = ";
		cin>>num2;
		cout<<endl;
		arthimaticopr(num1,num2);
		break;
		case 0:
			cout<<"You are Exiting The Program.";
			break;
     	default:
    		cout<<"invalid number";
	}
	} while( choice!=0);
}	
