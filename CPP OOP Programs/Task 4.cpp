#include <iostream>
#include <string>
using namespace std;

class employee {
    public:
        string name;
        int id;
        float salary;

    employee(string name, int id, float salary) {
        this->name = name;
        this->id = id;
        this->salary = salary;
    }

    void display() {
        cout << "********Employee Details********" << endl << endl;
        cout << "The Name Of The Employee Is: " << name << endl;
        cout << "The Id Of The Employee Is: " << id << endl;
        cout << "The Salary Of The Employee Is: " << salary << endl << endl;
    }
};

class manager : public employee {
    public:
        string dept;
        int bonus;

    manager(string name, int id, float salary, string dept, int bonus) 
        : employee(name, id, salary) {
        this->dept = dept;
        this->bonus = bonus;
    }

    float totalSalary() {
        return salary + bonus;
    }

    void displayDetails() {
        cout << "********Manager Details********" << endl << endl;
        cout << "The Name Of The Manager Is: " << name << endl;
        cout << "The Id Of The Manager Is: " << id << endl;
        cout << "The Salary Of The Manager Is: " << salary << endl;
        cout << "The Department Of The Manager is: " << dept << endl;
        cout << "The Total Salary Of The Manager with Bonus Is: " << totalSalary() << endl << endl;
    }
};

int main() {
    string empname;
    int empid;
    float empsalary;

    cout << "*********Enter Employee Details*********" << endl << endl;
    cout << "Enter The Name Of The Employee: ";
    cin >> empname;
    cout << "Enter The Id Of The Employee: ";
    cin >> empid;
    cout << "Enter The Salary Of The Employee: ";
    cin >> empsalary;
    cout << endl;

    employee obj(empname, empid, empsalary);
    obj.display();

    string ManName, ManDept;
    int ManId, ManBonus = 1000;
    float ManSalary;

    cout << "*********Enter Manager Details*********" << endl << endl;
    cin.ignore(); // Clear input buffer before getline
    cout << "Enter The Name Of The Manager: ";
    getline(cin, ManName);
    cout << "Enter The Id Of The Manager: ";
    cin >> ManId;
    cout << "Enter The Salary Of The Manager: ";
    cin >> ManSalary;
    cin.ignore(); 
    cout << "Enter The Department Of The Manager: ";
    getline(cin, ManDept);
    cout << endl;

    manager obj1(ManName, ManId, ManSalary, ManDept, ManBonus);
    obj1.displayDetails();

    return 0;
}

