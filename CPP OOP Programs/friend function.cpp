#include <iostream>
using namespace std;
class box{
	private:
		int length,width;
	public:
		box(int l,int w):length(l),width(w){ // paramitrized constructor
		}
		
		friend void display(box b);// declare friend function
};

	void display(box b)// calling friend function
	{
		cout<<"Length is "<<b.length<<endl; 
		cout<<"Width Is "<<b.width<<endl;
	}

int main()
{
	box obj(5,4);
	display(obj);
	
}
