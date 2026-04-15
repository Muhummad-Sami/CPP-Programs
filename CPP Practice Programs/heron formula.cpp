#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,s,area;
	
	cout<<"Enter the length of side a : ";
	cin>>a;
	cout<<endl;
	
	cout<<"Enter the length of side b : ";
	cin>>b;
	cout<<endl;
	
	cout<<"Enter the length of side c : ";
	cin>>c;
	cout<<endl;
// calculate the semi perimeter	
	s=(a+b+c)/2;
 
	
// Calculate the area by Heron's Formula
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  cout<<"Total Area Of Triangle : "<<area<<endl;
  return 0;
}
