#include <iostream>
#include <string>
using namespace std;
class book{
  private:
	
		string title;
		string auther;
		int year;
		float price;
	
	
	public:
	book(string t,string a,int y,float p){
		auther=a;
		title=t;
		year=y;
		price=p;
		
	}
	~book(){
		cout<<endl;
		cout<<"Book Object Destroyed. "<<title;
	}
	
	void bookdisply(){
		cout<<"Book Title: "<<title<<endl;
        cout<<"Author: " <<auther<<endl;
        cout<<"Year of Publication: "<<year<<endl;
        cout<<"Price: $" <<price<<endl;
	}
	void setyear(float newyear)
	{
		year =newyear;
	}
	void setprice(float newprice)
	{
		price =newprice;
	}

};
int main()
{
	book mybook("The Pakistan", "Imran Khan", 1976, 10.99);
	mybook.bookdisply();
	mybook.setprice(12.60);
	mybook.setyear(1980);
	cout<<endl;
 	cout << "Updated Book Details:" << endl;
 	cout<<endl;
 	mybook.bookdisply();

	
}
