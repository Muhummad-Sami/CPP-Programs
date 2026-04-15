#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
    
    void getPersonDetails() {
        cout << "Enter The Name Of The Person: ";
        cin >> name;
        cout << "Enter The Person Age: ";
        cin >> age;
    }
    
    void showPersonDetails() {
        cout << "Person Name: " << name << endl;
        cout << "Person Age: " << age << endl;
    }
};

class Employee : virtual public Person {
public:
    int employeeID;
    string department;
    
    void getEmployeeDetails() {
        cout << "Enter The Employee Id: ";
        cin >> employeeID;
        cout << "Enter The Employee Department: ";
        cin >> department;
    }
    
    void showEmployeeDetails() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Department: " << department << endl;
    }
};

class Freelancer : virtual public Person {
public:
    string projectName;
    int hourlyRate;
    
    void getFreelancerDetails() {
        cout << "Enter The Project Name: ";
        cin.ignore();
        getline(cin, projectName);
        cout << "Enter The HourlyRate: ";
        cin >> hourlyRate;
    }
    
    void showFreelancerDetails() {
        cout << "Project Name: " << projectName << endl;
        cout << "HourlyRate: " << hourlyRate << endl;
    }
};

class ContractEmployee : public Employee, public Freelancer {
public:
    string contractDuration;
    
    void getContractDetails() {
        cout << "Enter The Duration Of The Contract: ";
        cin.ignore();
        getline(cin, contractDuration);
    }
    
    void showContractDetails() {
        cout << "ContractDuration: " << contractDuration << endl;
    }
};

int main() {
    ContractEmployee obj;
    
    cout << "***** Person Details *****" << endl;
    obj.getPersonDetails();
    
    cout << "\n***** Employee Details *****" << endl;
    obj.getEmployeeDetails();
    
    cout << "\n***** Freelancer Details *****" << endl;
    obj.getFreelancerDetails();
    
    cout << "\n***** ContractEmployee Details *****" << endl;
    obj.getContractDetails();
    
    cout << "\n\n***** Displaying All Details *****" << endl;
    obj.showPersonDetails();
    obj.showEmployeeDetails();
    obj.showFreelancerDetails();
    obj.showContractDetails();
    
    return 0;
}
