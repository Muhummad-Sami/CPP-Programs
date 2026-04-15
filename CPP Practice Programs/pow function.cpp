#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double base,exponent,total;
	
	cout<<"Enter The value For The Base : ";
	cin>>base;
	cout<<endl;
	
	cout<<"Enter The Value For the Exponent : ";
	cin>>exponent;
	cout<<endl;
	
	//calcilate power by pow()function
	
	total = pow (base,exponent);
	cout<<exponent<<" raised to the power of "<<base<<" = "<<total<<endl;
	return 0;
}
