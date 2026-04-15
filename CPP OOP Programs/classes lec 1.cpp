#include <iostream>
using namespace std;
class Marks{
	//data members
	int eng;
	int urdu;
	int isl;
		
	//functions
	public:
	int in()
	{
		cout<<"Enter the Marks of English: ";
		cin>>eng;
		cout<<"Enter the Marks of Urdu: ";
		cin>>urdu;
		cout<<"Enter the Marks of Islamiyat: ";
		cin>>isl;
		cout<<endl;
	}
	int sum()
	{
		int total=eng+urdu+isl;
		cout<<"The Total Marks are: "<<total<<endl;
	}
	int avg()
	{
		int total=eng+urdu+isl;
		int avg=total/3;
		cout<<"The Average Of The Marks Is : "<<avg;
		
	}
	
};

int main()
{
	Marks obj1;
	obj1.in();
	obj1.sum();
	obj1.avg();
	
	
}
