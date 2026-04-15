#include <iostream >
#include<fstream>
#include<string>
using namespace std;
int main()

{	// read and print the data of the file 
	
//	string print;
//	ifstream file;
//	file.open("xyz.txt",ios::in);
//	
//	if(!file.is_open())
//	{
//		cout<<"File Opening Error!!";
//	}
//	else
//	{
//		while(!file.eof())
//		{
//		print=file.get(); //1st method
//		
////		getline(file,print); //2nd method
//
//		cout<<print;
//		}	
//	}
//	

//	ofstream news("filooo.txt");
//	news<<"I am Using File Handling.";
//	news.close();
//	
//	string read;
//	ifstream print("filooo.txt");
//	while(getline(print,read))
//	{
//		cout<<read;
//	}
//	print.close();

//	string base;
//	ifstream file("a.txt",ios::in);
//	if(!file.is_open())
//	{
//		cout<<"Opening error.";
//	}
//	else{
//		while(!file.eof())
//		{
//			base=file.get();
//			cout<<base;
//		}
//	}
	
	ofstream fiel("l.txt");
	fiel<<"hi";
	fiel.close();
	
	string k;
	ifstream m("l.txt");
	while(getline(m,k))
	{
		cout<<k;
	}
	m.close();
	
	string read;
	ifstream n("a.txt");
	if(!n.is_open())
	{
		cout<<"opening Error!!";
	}
	else
	{
		while(!n.eof())
		{
			read=n.get();
			cout<<read;
		}
	}
	
}
