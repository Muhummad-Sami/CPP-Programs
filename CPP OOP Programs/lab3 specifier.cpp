//#include <iostream>
//#include <string>
//using namespace std;
//class shirt{
//	//data member
//	private:
//	int price;
//	string brand;
//	
//	public:
//	string name;
//	int size;
//	
//
//	
//	
//	//function
//	func()
//	{
//		
//		cout<<"The Price Of The Shirt: ";
//		price=500;
//		cout<<price<<endl;
//		cout<<"The brand Of The  Shirt is: ";
//		brand="denezen";
//		cout<<brand;
//		
//	}
//	
//	
//};
//int main()
//{
//	shirt obj;
//	cout<<"Enter The Shirt Name: ";
//	getline(cin,obj.name);
//	cout<<"Enter The Shirt size: ";
//	cin>>obj.size;
//	cout<<"The Details about The Shirt Is :";
//	cout<<endl<<endl;
//	cout<<"The Shirt Name is : "<<obj.name<<endl;
//	cout<<"The Shirt size is : "<<obj.size<<endl;
//	obj.func();
//	
//}


#include<iostream>
using namespace std;
class rectangle{
	public:
	int length;
	int width;
	int total;
	
	rectangle(){
		cout<<"Enter the Length :";
		cin>>length;
		cout<<"Enter The Height: ";
		cin>>width; 
	}
	int calculate();
	
	int primeter()
	{
		cout<<"The perimeter of the rectangle : ";
		total=2*(length+width);
		cout<<total<<endl<<endl;
	}
	display()
	{
		cout<<"The Details Of The Rectangle are: "<<endl<<endl;
		cout<<"The Length of rectanle is : "<<length<<endl;
		cout<<"The width of rectanle is : "<<width<<endl;
		cout<<"The area of rectangle is : "<<length*width<<endl;
	}

	
	
};

rectangle::calculate()
	{
		cout<<"The Area Of Rectangle Is :";
		total=length*width;
		cout<<total<<endl;
	}
	
int main()
{
	rectangle obj;
	obj.calculate();
	obj.primeter();
	obj.display();
	
}

















