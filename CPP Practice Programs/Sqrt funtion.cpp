#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float num1,num2,maxnum,sqr;
	cout<<"Enter 1st Number"<<endl;
	cin>>num1; 
	
	cout<<"Enter 2st Number"<<endl;
	cin>>num2;
	
	maxnum=max(num1,num2);
	sqr=sqrt(maxnum);
	cout<<"Sq root of Maxnum Is :"<<sqr; 
}
