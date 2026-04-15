#include <iostream>
using namespace std;
class car
{
private:
	static int instanceCount;
public:
	car()
	{
		instanceCount++;
		cout<<"count is: "<<instanceCount<<endl;
	}
	static int getInstanceCount() {
	return instanceCount;
	}
};

int car:: instanceCount=0;

int main()
{
	car obj;
	car obj1;
	car obj2;
	cout << "Number of instances created: " <<
	car::getInstanceCount() << endl;
}


