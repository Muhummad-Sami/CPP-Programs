#include<iostream>
#include<string>
using namespace std;
class person{
	public:
		string name;
		int age;
	person(string n,int a):name(n),age(a){
	 
	}
	void display(){
		 cout<<endl<<"********* Display Student Details *********"<<endl<<endl;
		cout<<"Student Name: "<<name<<endl;
		cout<<"Student age: "<<age<<endl;
	}
};
class Student:public person{
	public:
		int studentId;
	Student(string n,int a,int id):person (n,a),studentId(id)
	{
	 
	}
	void displayInfo()
	{
		cout<<"Student Id: "<<studentId<<endl<<endl;	
	}		
};
class Professor:public person{
	public:
		int prfsrId;
		string SbjSpl;
	Professor(string n,int a,int id,string sb):person (n,a),prfsrId(id), SbjSpl(sb)
	{
	}
	void DisplayIn()
	{
		 cout<<endl<<"********* Display Student Details *********"<<endl<<endl;
		cout<<"Professor Name: "<<name<<endl;
		cout<<"Professor age: "<<age<<endl;
		cout<<"Professor Id: "<<prfsrId<<endl;
		cout<<"Professor Subject Specilization: "<<SbjSpl<<endl;
	}
}; 
// Singleton Class: DatabaseManager
class DatabaseManager {
private:
    static DatabaseManager* instance;
    DatabaseManager() {} // Private Constructor

public:
    static DatabaseManager* getInstance() {
        if (instance==nullptr) 
		{
			instance = new DatabaseManager();        
		}
		return instance;
    }

    void connect() 
		{ cout << "Database connected.\n"; }
    void disconnect() 
		{ cout << "Database disconnected.\n"; }
};

DatabaseManager* DatabaseManager::instance = nullptr;
	
int main() {
    string name, specialization;
    int age, studentId, professorId;

    // Student Info
    cout<<"********* Enter Student Details *********"<<endl<<endl;
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Student Age: ";
    cin >> age;
    cout << "Enter Student ID: ";
    cin >> studentId;

    Student student(name, age, studentId);
    student.display();
    student.displayInfo();

    // Professor Info
    cout<<"********* Enter Professor Details *********"<<endl<<endl;
    cout << "Enter Professor Name: ";
    cin >> name;
    cout << "Enter Professor Age: ";
    cin >> age;
    cout << "Enter Professor ID: ";
    cin >> professorId;
    cout << "Enter Subject Specialization: ";
    cin >> specialization;

    Professor professor(name, age, professorId, specialization);
    professor.DisplayIn();
    
     // Accessing Singleton DatabaseManager
    DatabaseManager* db = DatabaseManager::getInstance();
    db->connect();
    db->disconnect();

    return 0;
}

