#include <iostream>
#include <string>
using namespace std;

class company {
private:
    float growth;
    int profit;

public:
    string name;
    int year;

    // Default constructor
    company() {
        name = "Tesla";
        year = 1970;
        cout << "Default constructor called!" << endl << endl;
        cout << "The Company Name Is: " << name << endl;
        cout << "The Company Making Year: " << year << endl<<endl;
        
    }

    // Parameterized constructor
    company(float g, int p) : growth(g), profit(p) {
        name = "Tesla"; // Example: You can also set different values here
        year = 1970;
        cout << "Parameterized constructor called!" << endl << endl;
        cout << "The Company Name Is: " << name << endl;
        cout << "The Company Making Year: " << year << endl;
        cout << "The Growth of the Company is: " << growth << endl;
        cout << "The Profit of the Company is: " << profit << endl<<endl;
       
    }

    // Copy constructor
    company(const company &obj) {
        cout << "Copy constructor called!" << endl << endl;
        name = obj.name;
        year = obj.year;
        growth = obj.growth;
        profit = obj.profit;
        cout << "The Company Name Is: " << name << endl;
        cout << "The Company Making Year: " << year << endl;
        cout << "The Growth of the Company is: " << growth << endl;
        cout << "The Profit of the Company is: " << profit << endl;
    }
};

int main() {
	float growthuser;
	int profituser;
    // Default constructor
    company obj1;
    
    // Parameterized constructor Dynamic Memory Allocation
    // user inputs
    
    	cout<<"Enter The Company Growth: ";
    	cin>>growthuser;
    	cout<<"Enter The Company Profit: ";
    	cin>>profituser;
	
    company *Company=new company(growthuser,profituser);
    
    // -> use to update the data members instead of update in the class
    
    Company->name = "SpaceX";
    cout << "Updated Company Name: " << Company->name << endl;
    


    // Copy constructor (copying parameterized object)
    company obj3 = *Company;
    // Deallocate memory for car object
    delete Company;

    return 0;
}



