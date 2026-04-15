#include<iostream>
using namespace std;
int main()
{
    int a;
	 cout<<"Take a number : ";
	 cin>>a;
	 
	 if(a>0)
	 {
	 	cout<<a<<" is Positive Number : "<<endl;
	 }
	 else if (a<0)
	 { 
	    cout<<a<<" is Negative number : "<<endl;
	 }
	 else
	 {
	 	cout<<a<<" is neither positive nor Negative : ";
	 }
	 return 0;
}
