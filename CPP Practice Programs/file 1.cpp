#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{  
//	ofstream file;
//	file.open("E:\New folder/new.txt");
//	file<<"File Handling.";
////	cout<<file.tellp()<<endl;
////	file.seekp(-9,ios::end);
////	file<<"controling";
////	
//	file.close();
	
	string read;
	ifstream print("new.txt");
	while(getline(print,read))
	{
		cout<<read;
	}
	print.close();
	
	
}
