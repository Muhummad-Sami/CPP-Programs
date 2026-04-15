#include<iostream>
#include <string>
using namespace std;

struct Engine{
	int horsepower;
	string type;
	
};

struct car{
	string model;
	int year;
	
	Engine engine;//nested structure
};

int main()
{
	car mycar;//object
	
	mycar.model="supra";
	mycar.year=2023;
	mycar.engine.horsepower=300;
	mycar.engine.type="V6";
	
	cout<<"The Information about car."<<endl;
	cout<<"Model Is: "<<mycar.model<<endl;
	cout<<"Making Year Is: "<<mycar.year<<endl;
	cout<<"The Horsepower is: "<<mycar.engine.horsepower<<endl;
	cout<<"The Type Of The Car is: "<<mycar.engine.type<<endl;
}
