#include <iostream>
using namespace std;
int fact(int num,int facto=1);//decalre function
int main()
{
	
    int num;
    int facto;
  	cout<<"Enter The Number: ";
	cin>>num;
	facto=fact(num);//call function 
	cout<<"The Factorial of "<< num <<" is = "<<facto<<endl;
	return 0;
	  
}
   int fact(int num,int facto) // function deifnation
   {
   
	for(int i=1; i<=num; i++)
	{
	  facto*=i;	
	}
	return facto;
   }

