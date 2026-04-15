#include <iostream>
#include <string>
using namespace std;
class student{
	private:
		string name;
		int rollnumber;
		float m1,m2,m3;
	public:
		int setDetails(string n ,int r ,float m ,float M ,float mm) 
		{
			cout<<"Enter The name Of The Student : ";
			cin>>n;
			cout<<"Enter The Student Roll Number : ";
			cin>>r;
			cout<<"Enter The Marks Of 1st Subject : ";
			cin>>m;
			cout<<"Enter The Marks Of 2nd Subject : ";
			cin>>M;
			cout<<"Enter The Marks Of 3rd Subject : ";
			cin>>mm;
	
		}
		float getAverage()
		{
			float ave=m+M+mm/3;
			cout<<"The Average Of The Subjects : ";
			return ave;
		}
		
		void displayDetails(){
			
			cout<<"****** Student Details ******";
			cout<< "Name : "<< n<<endl;
			cout<< "Roll Number : "<<r<<endl;
			cout<< "1st Subject : "<<m<<endl;
			cout<< "2nd Subject : "<<M<<endl;
			cout<< "3rd Subject : "<<mm<<endl;
			
			
		}
		
};

int main()
{
	string a;
	int b;
	float c,d,e;
	
	student obj;
	obj.setDetails(a,b,c,d,e);
	obj.displayDetails();
	obj.getAverage();

}

