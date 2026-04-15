//// problem 1
//#include <iostream>
//#include <string>
//using namespace std;
//
//// Define the Book structure
//struct Book {
//    string title;
//    string author;
//    float price;
//};
//
//int main() {
//    const int num = 3; // Number of books
//    Book array[num]; // Create an array of Book structures and also individual objects
//
//    // Input details for each book
//    for (int i = 0; i < num; i++) {
//        cout<<"Enter Book " << i + 1 << " Details:" << endl;
//        cout<<"Enter Book Name: ";
//        getline(cin,array[i].title);
//        cout<<"Enter The Name Of the Author: ";
//        getline(cin,array[i].author);
//        cout<<"Enter The Price of the Book: ";
//        cin>>array[i].price;
//        cin.ignore();
//        cout<<endl;
//    }
//
//    // Display details of all books
//    for (int i = 0; i < num; i++) {
//        cout<<"Details Of Book " << i + 1 << ":" << endl;
//        cout<<"Title: " << array[i].title << endl;
//        cout<<"Author: " << array[i].author << endl;
//        cout<<"Price: $" << array[i].price << endl;
//        cout<<"---------------------------" << endl;
//    }
//
//    return 0;
//}

// problem 2

#include <iostream>
#include <string>
using namespace std;

struct employee {
    string name;
    int id;
    float salary;
};

int main() {
    int size;
    cout << "Enter the Number Of Employees: ";
    cin >> size;
    cout<<endl;

    employee obj[size]; // Create an array of 'employee' objects

    // Input details for employees
    for (int i = 0; i < size; i++) {
    	cout<<"Details of Employee "<<i+1<<endl;
        cout << "\nEnter the Name of Employee: ";
        cin >> obj[i].name;
        cout << "Enter the ID of Employee: ";
        cin >> obj[i].id;
        cout << "Enter the Salary of Employee: ";
        cin >> obj[i].salary;
        cout<<endl;
    }

    // Find the employee with the highest salary
    employee highestPaid = obj[0];
    for (int i = 1; i < size; i++) {
        if (obj[i].salary > highestPaid.salary) {
            highestPaid = obj[i];
        }
    }

    // Display the employee with the highest salary
    cout << "\nEmployee with the highest salary:\n";
    cout << "Name: " << highestPaid.name << "\n";
    cout << "Employee ID: " << highestPaid.id << "\n";
    cout << "Salary: " << highestPaid.salary << "\n";

    return 0;
}

//

