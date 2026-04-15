//#include <iostream>
//
//using namespace std;
//
//class stu {
//public:
//    int add(int num1,int num2) {
//        return num1+num2;
//    }
//};
//
//int main() {
//    stu student;
//    int num1,num2;
//
//    cout<<"Enter the first number: ";
//    cin>>num1;
//    cout<<"Enter the second number: ";
//    cin>>num2;
//
//    int result=student.add(num1,num2);
//    cout<<"The Sum Is: "<<result<<endl;
//    
//    return 0;
//}

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    Student(string n, int m) {
        name = n;
        marks = m;
    }

    // Function with object passed by value
    void showDetails(Student s) {
        cout << "Name: " << s.name << ", Marks: " << s.marks << endl;
    }

    // Function with object passed by reference
    void updateMarks(Student& s, int newMarks) {
        s.marks = newMarks;
    }

    void display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1("Ali", 85);
    Student s2("Sara", 90);

    s1.showDetails(s2);  // Passed by value

    s1.updateMarks(s2, 95);  // Passed by reference
    s2.display();

    return 0;
}

