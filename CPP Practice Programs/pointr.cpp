#include<iostream>
using namespace std;
void modify(int &x){
	x=20;
//	cout<<&x;
//	cout<<endl;
}
int main()
{
	int a=10;
	modify(a);
	cout<<"modify Value Is: "<<a<<endl;
	cout<<"The Adress is "<<&a<<endl;
//	
//	int* ptr=&a;
//	cout<<ptr<<endl;
//	int** pt=&ptr;
//	cout<<*pt;
	
}
