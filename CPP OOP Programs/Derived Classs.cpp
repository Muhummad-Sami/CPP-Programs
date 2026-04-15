#include <iostream>
#include <string>
using namespace std;
// Base Class
class vahical{
	//data members 
	public:
		string name;
		int seats;
		string hp;
		int speed;
	
	vahical()//constructor
	{
		name="Porche";
		seats=2;
		hp="400hp";
		speed=340;
	}
	void display()//function
	{
		cout<<"The Base Class. "<<endl<<endl;
		cout<<"The Name Of the Car is: "<<name<<endl;
		cout<<"The Seats In the Car: "<<seats<<endl;
		cout<<"The Horse Power Of The Car Is: "<<hp<<endl;
		cout<<"The Speed Of The Car is: "<<speed<<endl<<endl;
	}
};
//Derived Class

class car:public vahical{
	//data member
	private:
		string window;
		string music;
		string fuel;
	
	public:
	//paramitrize function
	int facilities(string window,string music,string fuel)
	{
		cout<<"The Derived Class Car From The Base Class."<<endl<<endl;
		cout<<"Your Car Have The Ability To Open the Window? ";
		cin>>window;
		cout<<"Your Car Have Music System? ";
		cin>>music;
		cout<<"How Much Your Car Have Fuel? ";
		cin>>fuel;
		cout<<endl<<endl;		
	}		
};
class truck:public vahical{
	//data members
	public: 
	string capacity;
	string loading;
	
	//constructor
	truck()
	{
		capacity="400Ton";
		loading="Yes";		
	}	
	//function
	void cargo()
	{
		cout<<"The Derived Class Truck From The Base Class."<<endl<<endl;
		cout<<"How Much Capacity of Your Truck Is: "<<capacity<<endl;
		cout<<"Is Your Truck Have Any Loading Operation? "<<loading<<endl<<endl;
		
	}
};

int main()
{
	string windo;
	string musi;
	string fue;
	
	truck obj;//object 1
	obj.display();
	
	car obj2;// object 2
	obj2.facilities(windo,musi,fue);
	obj.cargo();
	
}
