#include <iostream>
#include <string >
using namespace std;
class person{
	private:
		string name;
		int age;
	public:
		int setInfo(string n,int a)
		{
			name=n;
			age=a;
		}
		int getInfo()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
		}
};


int main()
{
	person obj;
	person* ptr=&obj;
	string n;
	int a;
	cout<<"Enter Name: ";
	cin>>n;
	cout<<"Enter Age: ";
	cin>>a;
	ptr->setInfo(n,a);
	ptr->getInfo();
	
}
