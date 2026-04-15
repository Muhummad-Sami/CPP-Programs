#include <iostream>
#include <string>

using namespace std;

void inputDetails(int* RN, string* name, char* grade, float* cgpa) {
    cout << "The Roll No Is: ";
    cin >> *RN;
    cout << "The Name Is  : ";
    cin >> *name;
    cout << "The Grade is : ";
    cin >> *grade;
    cout << "Enter the cgpa: ";
    cin >> *cgpa;
}

void displayDetails(int* RN, string* name, char* grade, float* cgpa, int* ptr1, char* ptr2, float* ptr3, string* ptr4) {
    cout << "The Roll No Is: " << *RN << endl;
    cout << "The Address Is: " << ptr1 << endl;
    cout << "The Name Is  : " << *name << endl;
    cout << "The Address Is: " << ptr2 << endl;
    cout << "The Grade is : " << *grade << endl;
    cout << "The Address Is: " << ptr3 << endl;
    cout << "The CGPA is   : " << *cgpa << endl;
    cout << "The Address Is: " << ptr4 << endl;
}

int main() {
    int RN;
    char grade;
    float cgpa;
    string name;
    
    int* ptr1 = &RN;
    char* ptr2 = &grade;
    float* ptr3 = &cgpa;
    string* ptr4 = &name;

    inputDetails(&RN, &name, &grade, &cgpa);
    displayDetails(&RN, &name, &grade, &cgpa, ptr1, ptr2, ptr3, ptr4);

    return 0;
}

