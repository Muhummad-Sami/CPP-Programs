#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks[3]; // Stores marks in 3 subjects

public:
    // Function to set student details with validation
    void setDetails(string studentName, int roll, float m1, float m2, float m3) {
        name = studentName;
        rollNumber = roll;
        
        // Validate and set marks (0-100 range)
        marks[0] = (m1 >= 0 && m1 <= 100) ? m1 : 0;
        marks[1] = (m2 >= 0 && m2 <= 100) ? m2 : 0;
        marks[2] = (m3 >= 0 && m3 <= 100) ? m3 : 0;
    }

    // Function to calculate and return average marks
    float getAverage() {
        return (marks[0] + marks[1] + marks[2]) / 3.0f;
    }

    // Function to display student information
    void displayDetails() {
        cout << "Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks in 3 subjects: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
        cout << "Average Marks: " << getAverage() << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {
    // Create multiple student objects
    Student student1, student2;

    // Set details for student1
    student1.setDetails("Alice Johnson", 101, 85.5f, 92.0f, 78.5f);
    
    // Set details for student2 (with one invalid mark)
    student2.setDetails("Bob Smith", 102, 95.0f, 110.0f, 88.0f); // 110 will be set to 0
    
    // Display details for both students
    student1.displayDetails();
    student2.displayDetails();

    // Create another student
    Student student3;
    student3.setDetails("Charlie Brown", 103, 72.0f, 68.5f, 81.0f);
    
    // Display average marks separately for student3
    cout << "Average marks for Charlie Brown: " << student3.getAverage() << endl;

    return 0;
}
