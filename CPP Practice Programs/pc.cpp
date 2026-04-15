#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter The Number :";
	cin>>num;
	
	if (num>0 && num%1==0 && num%num==0 && num%2!=0 && num%3!=0 && num!=1)
	{
		cout <<"Yes it is prime number.";
	}
	else
	{
		cout<<"No It is not a prime number.";
	}
}
