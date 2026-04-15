#include <iostream >
#include<fstream>
#include<string>
using namespace std;
int main()

{
	// creat new file and print and write the data  
	
//	ofstream write;
//	write.open("practice.txt");
//	write<<"file handling practice.";
//	write.close();
//	
//	string name;
//	ifstream read;
//	read.open("practice.txt");
//	while(getline(read,name)){
//		
//	cout<<name;
//	}
//	read.close();

	
	// read and print the data of the file 
	
//	string print;
//	ifstream file;
//	file.open("practice.txt",ios::in);
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
////		getline(file,print); //2nd method
//		cout<<print;
//		}	
//	}
	
	// show data of file without space and in one line
//	
//	string print;
//	ifstream file;
//	file.open("practice.txt",ios::in);
//	
//	if(!file.is_open())
//	{
//		cout<<"File Opening Error!!";
//	}
//	else
//	{
//		while(!file.eof())
//		{
//			
//		print=file.get();
//		if(print!=" " && print!="\n")
//		cout<<print;
//		
//		}	
//	}

	// to show 1st 5 letter of data
		
//	string print;
//	int count =0;
//	ifstream file;
//	file.open("practice.txt",ios::in);
//	
//	if(!file.is_open())
//	{
//		cout<<"File Opening Error!!";
//	}
//	else
//	{
//		while(!file.eof() &&count<=5)
//		{
//			
//		print=file.get();
//		count++;
//		cout<<print;
//		
//		}	
//	}
	
	// to show last 10 letter of data
	
	string print;
	ifstream file;
	file.open("practice.txt");
	
	if(!file.is_open())
	{
		cout<<"File Opening Error!!";
	}
	else
	{
	//	file.seekg(-10,ios::end);
		while(!file.eof())
		{
			
		print=file.get();
		cout<<print;
		
		}	
	}
	
	

	
	
	
}
