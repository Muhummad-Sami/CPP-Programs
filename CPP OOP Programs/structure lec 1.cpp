//#include <iostream>
//#include <string>
//using namespace std;
//
//struct student {
//    string name;
//    int roll;
//    float marks;
//};
//
//int main() {
//    int num;
//    cout << "Enter The Number Of Students: ";
//    cin >> num;
//
//    student array[num]; 
//    cout << "Enter The Details Of The Students." << endl;
//    for (int i = 0; i < num; i++) { 
//        cout << "Enter The Name Of The Student: ";
//        cin >> array[i].name;
//        cout << "Enter The Roll Number: ";
//        cin >> array[i].roll;
//        cout << "Enter The Marks: ";
//        cin >> array[i].marks;
//    }
//    
//    cout << "The Students' Details Are:" << endl;
//    for (int i = 0; i < num; i++) { 
//        cout << "Student " << i + 1 << endl;
//        cout << "Name Of Student: " << array[i].name << endl;
//        cout << "Roll Number Of The Student: " << array[i].roll << endl;
//        cout << "Marks Of The Student: " << array[i].marks << endl;
//    }
//
//    return 0;
//}

#include <iostream>
#include <string>
using namespace std;
struct student{
	string name;
	int roll;
	float marks;
	
};
int main()
{
	student obj1,obj2;
	// using object 1
	
	 cout << "Enter The Name Of The Student: ";
        cin >> obj1.name;
        cout << "Enter The Roll Number: ";
        cin >> obj1.roll;
        cout << "Enter The Marks: ";
        cin >> obj1.marks;
        
        cout << "The Students' Details Are:" << endl;
    	cout << "Name Of Student: " << obj1.name << endl;
    	cout << "Roll Number Of The Student: " << obj1.roll << endl;
	    cout << "Marks Of The Student: " << obj1.marks << endl;
	    
	// using object 2
	
	 cout << "Enter The Name Of The Student: ";
        cin >> obj2.name;
        cout << "Enter The Roll Number: ";
        cin >> obj2.roll;
        cout << "Enter The Marks: ";
        cin >> obj2.marks;
        
        cout << "The Students' Details Are:" << endl;
    	cout << "Name Of Student: " << obj2.name << endl;
    	cout << "Roll Number Of The Student: " << obj2.roll << endl;
	    cout << "Marks Of The Student: " << obj2.marks << endl;
	
	
}

