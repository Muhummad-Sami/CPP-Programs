#include<iostream>
using namespace std;
int main()
{
	char op;
	int num1,num2;
	cout<<"Enter The Value Of Num1 and op(+_*/) And num2 : ";
	cin>>num1>>op>>num2;
	cout<<endl;

	switch(op)
    {
		
	    case '+':
		cout<<"Addition : "<<num1+num2;
		break;
    
		case'-':
		cout<<"Subtraction : "<<num1-num2;
		break;
		
		case'*':
		cout<<"Multiple : "<<num1*num2;
		break;
		
		case'/':
			if(num2<=0)
			{
				cout<<"Num2 Is invalid Number";
			}
			else
			{
				cout<<num1/num2;
			}
		cout<<"Division : "<<num1/num2;
		break;
		
		default:
		cout<<"invalid operator: ";	
		return 0;
	}
}
