#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Base Employee class
class Employee {
protected:
    string name;
public:
    Employee(const string& name) : name(name) {}
    virtual ~Employee() {}
    
    virtual void calculateSalary() const = 0;
    
    string getName() const { return name; }
};

// FullTimeEmployee class
class FullTimeEmployee : public Employee {
private:
    double monthlySalary;
    int bonusAmount;
    string bonusReason;
public:
    FullTimeEmployee(const string& name, double salary) 
        : Employee(name), monthlySalary(salary), bonusAmount(0) {}
    
    void calculateSalary() const override {
        double total = monthlySalary + bonusAmount;
        cout << "Full-time employee " << name << "'s salary breakdown:\n";
        cout << " - Base salary: $" << monthlySalary << endl;
        if (bonusAmount > 0) {
            cout << " - Bonus: $" << bonusAmount;
            if (!bonusReason.empty()) {
                cout << " (" << bonusReason << ")";
            }
            cout << endl;
        }
        cout << " - TOTAL: $" << total << endl << endl;
    }
    
    // First version of setBonus
    void setBonus(int amount) {
        bonusAmount = amount;
        bonusReason = "";
    }
    
    // Overloaded version of setBonus
    void setBonus(int amount, string reason) {
        bonusAmount = amount;
        bonusReason = reason;
    }
};

// PartTimeEmployee class
class PartTimeEmployee : public Employee {
private:
    double hourlyWage;
    double hoursWorked;
public:
    PartTimeEmployee(const string& name, double wage, double hours) 
        : Employee(name), hourlyWage(wage), hoursWorked(hours) {}
    
    void calculateSalary() const override {
        double total = hourlyWage * hoursWorked;
        cout << "Part-time employee " << name << "'s salary breakdown:\n";
        cout << " - Hourly wage: $" << hourlyWage << "/hr\n";
        cout << " - Hours worked: " << hoursWorked << " hrs\n";
        cout << " - TOTAL: $" << total << endl << endl;
    }
};

// Intern class
class Intern : public Employee {
private:
    double stipend;
public:
    Intern(const string& name, double stipend) 
        : Employee(name), stipend(stipend) {}
    
    void calculateSalary() const override {
        cout << "Intern " << name << "'s stipend:\n";
        cout << " - TOTAL: $" << stipend << endl << endl;
    }
};

int main() {
    // Create a vector of Employee pointers
    vector<Employee*> employees;
    
    // Add different types of employees
    employees.push_back(new FullTimeEmployee("John Doe", 5000.0));
    employees.push_back(new PartTimeEmployee("Jane Smith", 20.0, 80.0));
    employees.push_back(new Intern("Mike Johnson", 1000.0));
    
    // Demonstrate bonus setting for full-time employee
    FullTimeEmployee* ftEmployee = dynamic_cast<FullTimeEmployee*>(employees[0]);
    if (ftEmployee) {
        ftEmployee->setBonus(500); // Simple bonus
        ftEmployee->setBonus(300, "Excellent performance"); // Bonus with reason
    }
    
    // Calculate salaries polymorphically
    cout << "Calculating salaries for all employees:\n";
    cout << "=======================================\n\n";
    for (const auto& emp : employees) {
        emp->calculateSalary();
    }
    
   
    return 0;
}
