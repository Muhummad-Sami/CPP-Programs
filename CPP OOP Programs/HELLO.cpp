#include<iostream>
using namespace std;

class person{
	public:
		string name;
		string email;
    
	person(string name, string email){
		this->name=name;
		this->email=email;
		
	}
	void displayinfo(){
		cout<<"Name is "<<name<<endl;
		cout<<"Email is "<<email<<endl;
	}		
	
	
};
class librarian :public person{
	public:
		int imployeeID;
		
		librarian(string name, string email, int imployeeID): person(name,email){
			this->imployeeID=imployeeID;
			
		}
		librarian(librarian &obj) :person(){
			this->imployeeID=obj.imployeeID;
			
		}
		void display(){
			displayinfo();
			  cout<<"librarian imployeeID is"<<imployeeID<<endl; 
		}
		
};
int main()
{
	Librarian l1("Musa ","mausa@gamil.com",111);
	l1.display();
	
	librarian l2(l1);
	l2.display();
	
	
	return 0;
}
