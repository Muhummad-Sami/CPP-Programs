#include <iostream>
using namespace std;
class singleton{
	private:
		static singleton* instance;
		singleton()
		{
			
			}
	public:
	//	Lazy Initialization 
		static singleton* getinstance()
		{
			if (instance ==nullptr)
			{
				instance =new singleton();
			}
			return instance;
			}
	//  Eager Initialization
//		public:
//        static singleton* getinstance() {
//        return instance; // Always available
//    }

		void connect()
		{
			cout<<"connected.";
		}
};
singleton* singleton::instance=nullptr;

int main()
{
	singleton* obj=singleton::getinstance();
	obj->connect();
}
