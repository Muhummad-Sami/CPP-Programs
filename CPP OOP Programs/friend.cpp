#include <iostream>
using namespace std;

// friend function 
class vahicle{
	private:
	int engine=21 ;
	string piston="Btairous";
	friend void system();
};
	void system(){
		vahicle vh1;
		//vh1.engine=12;
		//vh1.piston="rimidous";
		cout<<vh1.engine<<endl;
		cout <<vh1.piston<<endl;
}
int main(){
	vahicle vh2;
	//vh2.engine=34;
	system();
}
