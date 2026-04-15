//#include<iostream>
//using namespace std;
//int main()
//{
//   By While Loop
//
//   int i=5;
//   while(i>=0)
//   {
//   	int j=0;
//   	while(j<=5-i)
//   	{
//   		cout<<" ";
//   		j++;
//	   }
//	int k=0;
//	while(k<=2*i-0)
//	{
//		cout<<"*";
//		k++;
//	   }   
//   	
//   	cout<<endl;
//   	i--;
//   }

// By For Loop

//    int num;
//	cout<<"Enter The numbers : ";
//	cin>>num; 
//    for(int i=num; i>=0; i--)
//    {
//    	for(int j=0; j<=num-i; j++ )
//    	{
//    		cout<<" ";
//		}
//		for(int k=0; k<=2*i-0; k++)
//		{
//			cout<<"*";
//		}
//		
//		cout<<endl;
//	}   
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	 cout<<"The Multiplication"
//	for(int i=1; i<=5; i++)
//	{
//		for(int j=1; j<=5; j++ )
//		{
//	   cout<<i*j<<"\t";
//			
//		}
//		cout<<endl;
//	}
//	
//}
 
#include<iostream>
using namespace std;
void swapnumber(int &num1,int &num2);//declare funtion
int main()
{ 
    int num1,num2;
    cout<<"Enter 1st Number: ";
	cin>>num1;
	cout<<endl;
	cout<<"Enter 2nd Number: ";
	cin>>num2;
    cout<<"Before Swapping: 1st Number is "<<num1<<" 2nd Number Is "<<num2<<endl;
    swapnumber(num1,num2);//call funtion
	cout<<"After Swapping: 1st Number Is "<<num1<<"  2nd Number Is "<<num2<<endl;
	return 0;

}
	void swapnumber(int &num1,int &num2)//funtion defination
	{
	   int temp=num1;
	    num1=num2;
	    num2=temp;
	}

//#include<iostream>
//using namespace std;
//float circle(int radius,float pi=3.14);
//int main()
//{
//	int radius;
//	float crm;
//	cout<<"Enter the radius: ";
//	cin>>radius;
//	
//	crm=circle(radius);
//	
//	cout<<"The Circumference of the circle is : "<<crm;	
//}
//float circle(int radius,float pi)
//{
//	float crm;
//	crm= 2*pi*radius;
//	return crm;
//}

//#include<iostream>
//using namespace std;
//int factorial(int num,int fact=1);
//int main()
//{
//	int num;
//	int fact;
//	cout<<"Enter The Number: ";
//	cin>>num;
//	fact= factorial(num);
//	cout<<"The Factorial of "<<num<<" is = "<<fact;
//	
//}
//int factorial(int num,int fact)
//{
//	for(int i=1; i<=num; i++)
//	{
//		fact*=i;		
//	}
//	return fact;
//}

//#include <iostream>
//#include <cmath>
//using namespace std;
//bool power(int num1,int num2,int num3);
//int main()
//{
//	int num1,num2,num3;
//	cout<<"Enter The 1st Number: ";
//	cin>>num1;
//	cout<<"Enter The 2nd Number: ";
//	cin>>num2;
//	cout<<"Enter The 3rd Number: ";
//	cin>>num3;
//	bool result=power(num1,num2,num3);
//	if(result)
//	{
//		cout<<num1<<" is the power of "<<num2<<" equal to "<<num3<<endl;
//	}
//	else
//	{
//		cout<<num1<<" is the power of "<<num2<<" does not equal to "<<num3<<endl;
//	}
//}
//bool power(int num1,int num2,int num3)
//{
//	int result;
//	result=pow(num1,num2);
//	return result==num3;
//}
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//double power(double n,int p);
//int main()
//{
//	double n;
//	int p=2;
//	cout<<"Enter The Number : ";
//	cin>>n;
//	cout<<"The defult value of power is 2 ."<<endl;
//	double pw =power(n,p);
//	cout<<"The Default power of "<<n<<" is 2 and is equal to :"<<pw;
//	return 0;
//}
//double power(double n,int p)
//{
//	int pw=pow(n,p);
//	return pw;
//}





























































