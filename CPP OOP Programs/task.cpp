
#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Base class: Employee
class employee {
public:
    string name;
    int id;
    float salary;

    // Constructor for Employee
    employee(string name, int id, float salary) {
        this->name = name;
        this->id = id;
        this->salary = salary;
    }

    void displayEmployeeDetails() {
        cout << "********Employee Details********" << endl;
        cout << "The Name Of The Employee Is: " << name << endl;
        cout << "The Id Of The Employee Is: " << id << endl;
        cout << "The Salary Of The Employee Is: " << salary << endl;
    }
};

// Derived class: Manager
class manager : public employee {
public:
    string dept;
    int bonus;

    // Constructor for Manager
    manager(string name, int id, float salary, string dept, int bonus)
        : employee(name, id, salary),dept(dept),bonus(bonus) { // Call the base class constructor
//        this->dept = dept;
//        this->bonus = bonus;
    }

    void displayManagerDetails() {
        cout << "********Manager Details********" << endl;
        cout << "The Name Of The Manager Is: " << name << endl; // Inherited from Employee
        cout << "The Id Of The Manager Is: " << id << endl;    // Inherited from Employee
        cout << "The Salary Of The Manager Is: " << salary << endl; // Inherited from Employee
        cout << "The Department Of The Manager Is: " << dept << endl;
        cout << "The Bonus Of The Manager Is: " << bonus << endl;
    }
};

int main() {
    // Input for Employee details
    string empName;
    int empId;
    float empSalary;

    cout << "*********Enter Employee Details*********" << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
    cout << "Enter The Name Of The Employee: ";
    getline(cin, empName);
    cout << "Enter The Id Of The Employee: ";
    cin >> empId;
    cout << "Enter The Salary Of The Employee: ";
    cin >> empSalary;

    // Using the same object for both Employee and Manager
    string manDept;
    int manBonus;

    cout << endl << "*********Enter Manager Details*********" << endl;
    cin.ignore(); // Clear the input buffer
    cout << "Enter The Department Of The Manager: ";
    getline(cin, manDept);
    cout << "Enter The Bonus Of The Manager: ";
    cin >> manBonus;

    // Create one object of Manager
    manager obj(empName, empId, empSalary, manDept, manBonus);

    // Display Employee details using the same object
    obj.displayEmployeeDetails();

    // Display Manager details using the same object
    obj.displayManagerDetails();

    return 0;
}


