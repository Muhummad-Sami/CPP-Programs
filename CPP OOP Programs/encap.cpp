#include <iostream>
using namespace std;
//encapsulation
class student{
	
	int id, age ;
	string name ;
	public:
//	student()
//	{
//		id=12;
//		age=24;
//		name ="Asad";
//	}
	void getter()
		{
			
			cout<<id<<age<<name <<endl;
		}
		
	void setter( int a, string nam, int b )
	{
		
		//cout<<id<<age<<name <<endl;
		id=a;
		name =nam;
		age=b;
	}
	void getvalue(int &a, int &b, string &c){
		
		cout <<"enter Age "<<endl;
		cin >>a;
		cout <<"enter id "<<endl;
		cin >> b ;
		cout <<"enter name "<<endl;
		cin>>c;
	}
};



int main(){
	int age, id;
	string name ;
	student st1;
	st1.getvalue( age, id , name );
	//st1.getter();
	st1.setter(id , name , age);
	
	st1.getter();
	
}
