#include<iostream>
#include<string>
using namespace std;
class student{
	public:
		string name;
		int rollNo;
		float eng,urdu,math,avg,sum;
	
	void details()
	{
		cout<<"-------- Enter The Student Details --------"<<endl<<endl;
		cout<<"Enter The Name Of The Student: ";
		cin>>name;
		cout<<"Enter The Roll Number Of The Student: ";
		cin>>rollNo;
		cout<<"Enter The Number Of The English: ";
		cin>>eng;
		cout<<"Enter The Number of The Urdu: ";
		cin>>urdu;
		cout<<"Enter The Number of The Math: ";
		cin>>math;
		sum=eng+urdu+math;
		cout<<"Obtained Marks Of The Subjects is: "<<sum<<endl;
		avg=sum/3;
		cout<<"The Average Of All The Subject is: "<<avg;
			
	}
	void display()
	{
		cout<<endl<<endl<<"-------Display Of The Student Details-------"<<endl<<endl;
		cout<<"Studen Name: "<<name<<endl;
		cout<<"Roll Number: "<<rollNo<<endl;
		cout<<"The Sum Of The Obtained Marks Is: "<<sum<<endl;
		cout<<"The Average Of Obtained Marks is: "<<avg<<endl;
	}
};
int main()
{
	student obj;
	obj.details();
	obj.display();
	
	
	
}
