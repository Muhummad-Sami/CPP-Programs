#include <iostream>
#include <string>
#include <windows.h> // for Sleep function
#include <conio.h>  // for getch function
#include <limits>   // for clearing input buffers
#include <cstdlib>  // for exit function
#include <fstream>  // for file handling

using namespace std;

// Structure to store customer information
struct CustomerInfo {
    int age;
    int km;
    string id;
    string name;
    string father;
    string phonenumber;
    string address;
    string occupation;
    string pickup;
    string drop;
    string newName;
    string newFatherName;
    string newPhonenumber;
    string newAddress;
    string newId;
    

    // Fields to store selected car details
    string carName;
    int rentPerDay;
    int days;
    int numberOfCars;
    string carsName;
    int rentPerDays;
    int dayss;
    int numberOfCarss;
    long final;
    string bookingDate;
    string bookingDates;
    string feedback;
    long paid;

// Declares a static data member named info inside the CustomerInfo structure

    static CustomerInfo info;
};

// definition and initialization of the static member 
CustomerInfo CustomerInfo::info;

// Function to display the admin main menu
void displayAdminMainMenu() {
	system("cls");
    cout << endl << "\t\t\t************************************************************************************" << endl << endl;
    cout << "\t\t\t------------------------------- CAR RENTAL SYSTEM ----------------------------------" << endl << endl;
    cout << "\t\t\t************************************************************************************" << endl << endl;
    cout << "\t\t\t---------------------------- Welcome To Admin Main Menu ----------------------------" << endl << endl;
    cout << "\t\t\t************************************************************************************" << endl << endl;

    cout << "  1. Enter Customer information: " << endl;
    cout << "  2. Car Selection For Rent: " << endl;
    cout << "  3. Enter the Journey Information: " << endl;
    cout << "  4. Generate Payment Receipt: " << endl;
    cout << "  5. Add Payment: " << endl;
    cout << "  6. Save Records: " <<endl;
    cout << "  7. Check Records: " << endl;
    cout << "  0. Exit: " << endl << endl;

    cout << " Enter your option...";
}

// Function to display the customer main menu
int displayCustomerMainMenu() {
    system("cls");
    cout << endl << "\t\t\t************************************************************************************" << endl << endl;
    cout << "\t\t\t------------------------------- CAR RENTAL SYSTEM ----------------------------------" << endl << endl;
    cout << "\t\t\t************************************************************************************" << endl << endl;
    cout << "\t\t\t-------------------------- Welcome To Customer Main Menu ---------------------------" << endl << endl;
    cout << "\t\t\t************************************************************************************" << endl << endl;

    cout << "  1. Check Available Car: " << endl;
    cout << "  2. Profile Details: " << endl;
    cout << "  3. View Company Policy: " << endl;
    cout << "  4. View Booking: " << endl;
    cout << "  5. Cancel Booking: " << endl;
    cout << "  6. Customer Feedback: " << endl;
    cout << "  0. Exit: " << endl << endl;

    cout << " Enter your option...";
}

// Function to display the name of the project
void ProjectName() {
    cout << endl << "\t\t\t************************************************************************************" << endl << endl;
    cout << "\t\t\t-------------------------------- CAR RENTAL SYSTEM ---------------------------------" << endl << endl;
    cout << "\t\t\t************************************************************************************" << endl << endl;
}

// Base abstract class
class User {
	protected:   // Encapsulation
	    string name;
	    string password;
	    int choice;
	    int Caroption;
	    int Normalcar;
	    int days;
	    int dayss;
	    int Number;
	    long total;
	    long discount;
	
	public:

	
	User ()
	{
		name="";
		password="";
	}	
// Paramitrized constructor
    User(string name, string password) : name(name), password(password) {}
    
//pure virtual function
    virtual bool login() = 0;
    virtual void menu() = 0;

// method for login
    bool commonLogin() {
        string regname, regpass, loginname, loginpass;
    
// Create your Account
        cout << "\t\t\t\t\t      ********* Register Yourself *********" << endl << endl;
        cin.ignore();
        cout << " Enter Your Name: ";
        getline(cin, regname);
        cout << " Enter Your Password: ";
        getline(cin, regpass);
    
// Sleep Function for creating account
        cout << " Your Account Is Creating. Please Wait ";
        for (int i = 1; i <= 4; i++) {
            cout << "!";
            Sleep(1000);
        }
    
        cout << endl << endl << endl << "\t\t\t\t\t  ********* Registered Successfully!! **********" << endl << endl;
    
// Login starts here
        cout << "\t\t\t\t\t   ************** Login Yourself **************" << endl << endl;
        cout << " Enter Your Name: ";
        getline(cin, loginname);
        cout << " Enter Your Password: ";
        getline(cin, loginpass);
        cout << endl << endl;
    
        if (regname == loginname && regpass == loginpass) {
            cout << "\t\t\t\t\t   ********* Logged In Successfully!! *********" << endl << endl;
            return true;
        } else {
            for (int i = 3; i >= 1; i--) {
                if (regname != loginname || regpass != loginpass) {
                    cout << "\t\t\t\t\t   ********* Remaining Attempts " << i << " *********" << endl << endl;
                }
                
                if (regname != loginname && regpass != loginpass) {
                    cout << " You Entered The Wrong Username and Password!!" << endl << endl;
                    cout << " Enter Your Name: ";
                    getline(cin, loginname);
                    cout << " Enter Your Password: ";
                    getline(cin, loginpass);
                    cout << endl << endl;
                } else if (regname != loginname) {
                    cout << " You Entered The Wrong Username." << endl << endl;
                    cout << " Enter Your Name: ";
                    getline(cin, loginname);
                    cout << " Enter Your Password: ";
                    getline(cin, loginpass);
                    cout << endl << endl;
                } else if (regpass != loginpass) {
                    cout << " You Entered The Wrong Password." << endl << endl;
                    cout << " Enter Your Name: ";
                    getline(cin, loginname);
                    cout << " Enter Your Password: ";
                    getline(cin, loginpass);
                    cout << endl << endl;
                }
            }
            
            if (regname == loginname && regpass == loginpass) {
                cout << " You Entered the Correct Username or Password !!" << endl << endl;
                cout << "\t\t\t\t\t   ********* Logged In Successfully! *********" << endl << endl;
                return true;
            } else {
                cout << " Sorry, You Have No More Attempts !!";
                return false;
            }
        }
    }
// destructor
	~User();
};

// defination of destrctor and use of scope resolution
User::~User() {
    // Nothing to write
}

// hierarchical inheritance.
// Admin class derived from User
class Admin : public User {
	public:

// default Constructor
	Admin()
	{
		name="";
		password="";
	}
// paramitrized constructor
    Admin(string name, string password) : User(name, password) {}
// copy constrcutor
	Admin(const Admin &obj)
	{
		name=obj.name;
		password=obj.password;
	}

// overridding pure function in derived class
    bool login() override 
	{
// call login function 
        return commonLogin();
       
    }

// overridding pure function in derived class
    void menu() override 
	{
// method to display admin menu
        adminMenuLoop();
    }
    
// Function overloading (compile-time polymorphism)

    
    void displayCarInfo(string carName, int rent) {
        cout << carName << " \t\t " << rent << endl;
    }
    
    void displayCarInfo(string carName, int rent, string speed, string seats) {
         cout << carName << " \t\t " << rent << " \t\t " << speed << " \t\t " << seats << endl;
    }
    
    void displayCarInfo(string carName, int rent, string speed, string seats, string license) {
         cout << carName << " \t\t " << rent << " \t\t " << speed << " \t\t " << seats << " \t " << license << endl;
    }

// function with inside loop to display menu 
    void adminMenuLoop() 
	{
        int opt;
        while (true) {
            displayAdminMainMenu();
            cin >> opt;
// nested while loop
            while (opt > 7 || opt < 0) {
                cout << " Invalid option. Please choose an option between 0-7" << endl;
                cout << " Enter your option...";
                cin >> opt;
            }
// switch cases
            switch (opt) {
                case 1: enterCustomerInformation(); break;
                case 2: carSelectionForRent(); break;
                case 3: enterJourneyInformation(); break;
                case 4: generatePaymentReceipt(); break;
                case 5: addPayment(); break;
                case 6: saveRecords();break;
                case 7: checkRecords(); break;
                case 0: cout << endl << " Exiting program ";
				        for (int i = 1; i <= 4; i++) {
				            cout << ".";
				            Sleep(1000);
				        }
						exit(0);break; // Exit the admin menu loop
            }
        }
    }

// method to Enter Customer Information
    void enterCustomerInformation() 
	{
        cout << endl << " Enter Any Key To Continue: ";
        getch();
        system("cls");

        ProjectName();
        cout << "\t\t\t-------------------------- Enter Customer Information ------------------------------" << endl << endl;
        cout << "\t\t\t************************************************************************************" << endl << endl;

        cin.ignore();
        cout << " Enter Customer Name: ";
        getline(cin, CustomerInfo::info.name);
        cout << " Enter Father's Name: ";
        getline(cin, CustomerInfo::info.father);
        cout << " Enter Age: ";
        cin >> CustomerInfo::info.age;
        cin.ignore();
        cout << " Enter National ID: ";
        getline(cin, CustomerInfo::info.id);
        cout << " Enter Phone Number: ";
        getline(cin, CustomerInfo::info.phonenumber);
        cout << " Enter Address: ";
        getline(cin, CustomerInfo::info.address);
        cout << " Enter Occupation: ";
        getline(cin, CustomerInfo::info.occupation);

        cout << endl << " Saving customer information ";
        for (int i = 1; i <= 4; i++) {
            cout << ".";
            Sleep(1000);
        }

        cout << endl << " Customer information saved successfully!" << endl;
        cout << " Enter any key to return to the main menu.";
        getch();
        system("cls");
    }

//method to Car Selection For Rent 
    void carSelectionForRent() 
	{
        cout << endl << " Enter Any Key To Continue: ";
        getch();
        system("cls");
           
        ProjectName();
       
        cout << "\t\t\t---------------------------- Car Selection For Rent ------------------------------" << endl << endl;
        cout << "\t\t\t************************************************************************************" << endl << endl;
            
        cout << " There Are Two Types Of Car Available " << endl << endl;
        cout << " 1.For Bridal Couple." << endl;
        cout << " 2.For Normal Booking." << endl << endl;
        cout << " Enter your option...";				               
        cin >> choice;
            
        system("cls");
        ProjectName();
                
        switch (choice) {
// Bridal Cars
            case 1: { 
                cout << "\t\t\t------------------------------ Bridal Car Selection --------------------------------" << endl << endl;
                cout << "\t\t\t************************************************************************************" << endl << endl;
                
                cout << "   Car Name \t\t Rent Per Day \t\t Speed \t\t\t Seats \t\t Lincence No " << endl << endl;
// Using overloaded displayCarInfo function
                cout << "1. "; displayCarInfo("Bugatti", 200000, "340km/h", "2 Seater", "HGFV56");
                cout << "2. "; displayCarInfo("Porsche", 180000, "490km/h", "2 Seater", "ZCNK898");
                cout << "3. "; displayCarInfo("Range Rover", 160000, "250km/h", "4 Seater", "MXCBJJ8");
                cout << "4. "; displayCarInfo("FordMustang", 140000, "250km/h", "4 Seater", "NBHJFK8");
                cout << "5. "; displayCarInfo("Ferrari", 220000, "350km/h", "2 Seater", "HSGUYF6");
                cout << "6. "; displayCarInfo("Lamborghini", 210000, "340km/h", "2 Seater", "KSAJI54");
                cout << "7. "; displayCarInfo("Tesla Model", 120000, "250km/h", "5 Seater", "BCXBBJ9");
                cout << "8. "; displayCarInfo("Audi R8", 190000, "330km/h", "2 Seater", "NXCB23");
                cout << endl << endl;
                
                cout << " Enter The Option...";
                cin >> Caroption;
                cin.ignore();
                cout << " Enter Your Booking Date...";
                getline(cin, CustomerInfo::info.bookingDates);
                cout << " Enter The Days For Rent a Car...";
                cin >> dayss;
                cout << " Enter The Number How many Cars You Want To book...";
                cin >> Number;
                
                switch (Caroption) {
                    case 1:
                        CustomerInfo::info.carsName = "Bugatti"; CustomerInfo::info.rentPerDays = 200000;
                        break;
                    case 2:
                        CustomerInfo::info.carsName = "Porsche"; CustomerInfo::info.rentPerDays = 180000;
                        break;
                    case 3:
                        CustomerInfo::info.carsName = "Range Rover"; CustomerInfo::info.rentPerDays = 160000;
                        break;
                    case 4:
                        CustomerInfo::info.carsName = "Ford Mustang"; CustomerInfo::info.rentPerDays = 140000;
                        break;
                    case 5:
                        CustomerInfo::info.carsName = "Ferrari"; CustomerInfo::info.rentPerDays = 220000;
                        break;
                    case 6:
                        CustomerInfo::info.carsName = "Lamborghini"; CustomerInfo::info.rentPerDays = 210000;
                        break;
                    case 7:
                        CustomerInfo::info.carsName = "Tesla Model S"; CustomerInfo::info.rentPerDays = 120000;
                        break;
                    case 8:
                        CustomerInfo::info.carsName = "Audi R8"; CustomerInfo::info.rentPerDays = 190000;
                        break;
                }
                
                if(Caroption >=1 && Caroption <=8) {
                    CustomerInfo::info.dayss = dayss;
                    CustomerInfo::info.numberOfCarss = Number;
                    total += CustomerInfo::info.rentPerDays * dayss * Number;
                    
                    cout << " The Rent Of " << Number << " " << CustomerInfo::info.carsName << " for " << dayss << " days is = " << total << ".\n";
                    
                    cout << endl << endl << " Your Information Is Saving. Please Wait ";
                    for (int i = 1; i <= 4; i++) {
                        cout << "!";
                        Sleep(1000);
                    }
                    
                    cout << endl << " Information saved successfully!" << endl;
                    cout << " If You Want To Book More Cars Then Visit The Main Menu." << endl << endl;
                    
                    cout << " Enter Any Key To Visit The Main Menu to Select More Cars. Otherwise, Give Your Journey Details: ";
                    getch();
                    system("cls");
                } else {
                    cout << " Invalid Option! Please select a valid car.\n";
                    cout << " Enter Any Key To Visit The Main Menu: ";
                    getch();
                    system("cls");
                }
                break;
            }
            
// Normal Cars            
            case 2: { 
                cout << "\t\t\t------------------------------- Normal Car Selection -------------------------------" << endl << endl;
                cout << "\t\t\t************************************************************************************" << endl << endl;
                
                cout << "   Car Name \t\t Rent Per Day \t\t Speed \t\t\t Seats \t\t Lincence No " << endl << endl;
// Using overloaded displayCarInfo function
                cout << "1. "; displayCarInfo("Toyota Corolla", 80000, "180km/h", "5 Seater", "DR1V3R");
                cout << "2. "; displayCarInfo("Honda Civic 25", 90000, "200km/h", "5 Seater", "SP33DY");
                cout << "3. "; displayCarInfo("Suzuki Alto 25", 50000, "140km/h", "4 Seater", "VCG6YB");
                cout << "4. "; displayCarInfo("Kia Sportage", 90000, "220km/h", "5 Seater", "JGGH56V");
                cout << "5. "; displayCarInfo("Hyundai Tucson", 95000, "210km/h", "5 Seater", "DE56NH");
                cout << "6. "; displayCarInfo("Nissan Sunny", 70000, "180km/h", "4 Seater", "34DWNJ");
                cout << "7. "; displayCarInfo("Toyota Hiace", 98000, "160km/h", "12 Seater", "98FRWS");
                cout << "8. "; displayCarInfo("Honda BR-V 25", 85000, "200km/h", "7 Seater", "CFRRD4");
                cout << endl << endl;
                cout << " Enter The Option...";
                cin >> Normalcar;
                cin.ignore();
                cout << " Enter Your Booking Date...";
                getline(cin, CustomerInfo::info.bookingDate);
                cout << " Enter The Days For Rent a Car...";
                cin >> days;
                cout << " Enter The Number How many Cars You Want To book...";
                cin >> Number;
                
                switch (Normalcar) {
                    case 1:
                        CustomerInfo::info.carName = "Toyota Corolla"; CustomerInfo::info.rentPerDay = 80000;
                        break;
                    case 2:
                        CustomerInfo::info.carName = "Honda Civic"; CustomerInfo::info.rentPerDay = 90000;
                        break;
                    case 3:
                        CustomerInfo::info.carName = "Suzuki Alto"; CustomerInfo::info.rentPerDay = 50000;
                        break;
                    case 4:
                        CustomerInfo::info.carName = "Kia Sportage"; CustomerInfo::info.rentPerDay = 90000;
                        break;
                    case 5:
                        CustomerInfo::info.carName = "Hyundai Tucson"; CustomerInfo::info.rentPerDay = 95000;
                        break;
                    case 6:
                        CustomerInfo::info.carName = "Nissan Sunny"; CustomerInfo::info.rentPerDay = 70000;
                        break;
                    case 7:
                        CustomerInfo::info.carName = "Toyota Hiace"; CustomerInfo::info.rentPerDay = 98000;
                        break;
                    case 8:
                        CustomerInfo::info.carName = "Honda BR-V"; CustomerInfo::info.rentPerDay = 85000;
                        break;
                }
                
                if (Normalcar >=1 && Normalcar <=8) {
                    CustomerInfo::info.days = days;
                    CustomerInfo::info.numberOfCars = Number;
                    total += CustomerInfo::info.rentPerDay * days * Number;
                    cout << " The Rent Of " << Number << " " << CustomerInfo::info.carName << " for " << days << " days is, ";
					if(Caroption>=1 && Caroption<=8)
					{
						cout<<" And Also "<< Number <<" Previously selected car is = " << total << ".\n";
					}
					else
					{
						cout<<total;
					}
                    
// Sleep Function for saving customer information
                    cout << endl << endl << " Your Information Is Saving. Please Wait ";
                    for (int i = 1; i <= 4; i++) {
                        cout << "!";
                        Sleep(1000);
                    }
                    
                    cout << endl << " Information saved successfully!" << endl << endl;
                    cout << " Enter Any Key To Visit The Main Menu to Select More Cars. Otherwise, Give Your Journey Details: ";
                    getch();
                    system("cls");
                } else {
                    cout << " Invalid Option! Please select a valid car.\n";
                    cout << " Enter Any Key To Visit The Main Menu: ";
                    getch();
                    system("cls");
                }
                break;
            }
            
            default: {
                cout << " Invalid Option!";
                cout << " Enter any key to return to the main menu.";
                getch();
                system("cls");
                break;
            }
        }
    }

// metod to Enter Journey Information
    void enterJourneyInformation() 
	{
        cout << endl << " Enter Any Key To Continue: ";
        getch();
        system("cls");
        
        ProjectName();
        cout << "\t\t\t---------------------------- Enter Journey Information -----------------------------" << endl << endl;
        cout << "\t\t\t************************************************************************************" << endl << endl;
        
        cin.ignore();
        cout << " Enter Pickup Location: ";
        getline(cin, CustomerInfo::info.pickup);
        cout << " Enter Drop Location: ";
        getline(cin, CustomerInfo::info.drop);
        cout << " Enter Distance (in km): ";
        cin >> CustomerInfo::info.km;
        
        cout << endl << " Saving journey information ";
        for (int i = 1; i <= 4; i++) {
            cout << ".";
            Sleep(1000);
        }
        
        cout << endl << " Journey information saved successfully!" << endl;
        cout << " Enter any key to return to the main menu.";
        getch();
        system("cls");
    }
    
// method to Generate Payment Receipt
    void generatePaymentReceipt() 
	{
        cout << endl << " Enter Any Key To Continue: ";
        getch();
        system("cls");
        
        ProjectName();
        cout << "\t\t\t----------------------------- Generate Payment Receipt -----------------------------" << endl << endl;
        cout << "\t\t\t************************************************************************************" << endl << endl;
        
// Calculate discount if distance is more than 200 km
        if (CustomerInfo::info.km > 200) {
            discount = 0.15 * total;
        } else {
            discount = 0;
        }
        
        cout << endl << "\t\t\t\t\t---------- Customer Details ----------" << endl << endl;
        cout << " Customer Name: " << CustomerInfo::info.name << endl;
        cout << " Father's Name: " << CustomerInfo::info.father << endl;
        cout << " National ID: " << CustomerInfo::info.id << endl;
        cout << " Phone Number: " << CustomerInfo::info.phonenumber << endl;
        cout << endl << "\t\t\t\t\t---------- Journey Details -----------" << endl << endl;
        cout << " Pickup Point: " << CustomerInfo::info.pickup << endl;
        cout << " Drop Point: " << CustomerInfo::info.drop << endl;
        cout << " Distance In Km: " << CustomerInfo::info.km <<endl;
        cout << endl << "\t\t\t\t\t---------- Bill Details --------------" << endl << endl;
        cout << " Total Rent: " << total << endl;
        cout << " You Got The 15% Discount !!!" << endl;
        cout << " Discount: " << discount << endl;
        CustomerInfo::info.final = total - discount;
        cout << " Final Amount after Discount: " << CustomerInfo::info.final << endl;
        cout << endl << "\t\t\t\t\t---------- Booked Car Details --------" << endl << endl;	
        cout << " Normal Cars Info \t\t\t Bridal Cars Info "<< endl << endl;			
        cout << " Car Name: " << CustomerInfo::info.carName << " \t\t\t Car Name: " << CustomerInfo::info.carsName << endl;
        cout << " Rent Per Day: " << CustomerInfo::info.rentPerDay << " \t\t\t Rent Per Day: " << CustomerInfo::info.rentPerDays << endl;
        cout << " Booking Date: " << CustomerInfo::info.bookingDate << " \t\t\t Booking Date: "<< CustomerInfo::info.bookingDates << endl;
        cout << " Number of Days: " << CustomerInfo::info.days << " \t\t\t Number of Days: " << CustomerInfo::info.dayss << endl;
        cout << " Number of Cars: " << CustomerInfo::info.numberOfCars << " \t\t\t Number of Cars: " << CustomerInfo::info.numberOfCarss  << endl;
    
        
        cout << endl << " Amount You Have To Pay : " << CustomerInfo::info.final << endl;
        
        cout << endl << " Receipt generated successfully!" << endl;
        cout << " Enter any key to return to the main menu.";
        getch();
        system("cls");
        
    }

// method to Add Payment
    void addPayment() {
        cout << endl << " Enter Any Key To Continue: ";
        getch();
        system("cls");
        
        ProjectName();
        cout << "\t\t\t--------------------------------- Add Payment --------------------------------------" << endl << endl;
        cout << "\t\t\t************************************************************************************" << endl << endl;
        
        cout << " Total Amount Due: " << CustomerInfo::info.final << endl;
        cout << " Enter Amount Paid: ";
        cin >> CustomerInfo::info.paid;
        
        if (CustomerInfo::info.paid >=  CustomerInfo::info.final) {
            cout << " Payment successful! Change: " << (CustomerInfo::info.paid - CustomerInfo::info.final) << endl;
//           CustomerInfo::info.final = 0; // Reset total after payment
        } else {
            cout << " Remaining amount: " << (CustomerInfo::info.final - CustomerInfo::info.paid) << endl;
            CustomerInfo::info.final -= CustomerInfo::info.paid;
        }
        
        cout << " Enter any key to return to the main menu.";
        getch();
        system("cls");

    }

// Save Records
	void saveRecords()
	{
		cout << endl << " Enter Any Key To Continue: ";
        getch();
        system("cls");
        
        ProjectName();
        cout << "\t\t\t------------------------------- Saving Records -------------------------------------" << endl << endl;
        cout << "\t\t\t************************************************************************************" << endl << endl;
        
        // file handling to save payment reciept
        ofstream bill("File.txt", ios::app);
        if (bill.is_open()) {
            bill << endl << "\t\t\t\t\t---------- Customer Details ----------" << endl << endl;
            bill << " Customer Name: " << CustomerInfo::info.name << endl;
            bill << " Father's Name: " << CustomerInfo::info.father << endl;
            bill << " National ID: " << CustomerInfo::info.id << endl;
            bill << " Phone Number: " << CustomerInfo::info.phonenumber << endl;
            bill << endl << "\t\t\t\t\t---------- Journey Details -----------" << endl << endl;
            bill << " Pickup Point: " << CustomerInfo::info.pickup << endl;
            bill << " Drop Point: " << CustomerInfo::info.drop << endl;
            bill << " Distance In Km: " << CustomerInfo::info.km << endl;
            bill << endl << "\t\t\t\t\t---------- Bill Details --------------" << endl << endl;
            bill << " Total Rent: " << total << endl;
            bill << " Discount: " << discount << endl;
            bill << " Final Amount after Discount: " << CustomerInfo::info.final << endl;
            bill << endl << "\t\t\t\t\t---------- Booked Car Details --------" << endl << endl;
            bill << " Normal Cars Info \t\t\t Bridal Cars Info " << endl << endl;
            bill << " Car Name: " << CustomerInfo::info.carName << " \t\t\t Car Name: " << CustomerInfo::info.carsName << endl;
            bill << " Rent Per Day: " << CustomerInfo::info.rentPerDay << " \t\t\t Rent Per Day: " << CustomerInfo::info.rentPerDays << endl;
            bill << " Booking Date: " << CustomerInfo::info.bookingDate << " \t\t\t Booking Date: " << CustomerInfo::info.bookingDates << endl;
            bill << " Number of Days: " << CustomerInfo::info.days << " \t\t\t Number of Days: " << CustomerInfo::info.dayss << endl;
            bill << " Number of Cars: " << CustomerInfo::info.numberOfCars << " \t\t\t Number of Cars: " << CustomerInfo::info.numberOfCarss << endl << endl;
            bill << " Total Amount: " << CustomerInfo::info.final << endl;
			bill << " Paid Amount: " << CustomerInfo::info.paid << endl;
			bill.close();
        } else {
            cout << "Unable to open file for writing." << endl;
        }
        
        cout << " Your Records are Saving ";
        for (int i = 1; i <= 4; i++) {
                        cout << "!";
                        Sleep(1000);
                    }
                    
        cout << endl << " Information saved successfully!" << endl;
        
        cout << " Enter any key to return to the main menu.";
        getch();
        system("cls");
        

		
	}

// method to Check Records
    void checkRecords() {
        cout << endl << " Enter Any Key To Continue: ";
        getch();
        system("cls");
        
        ProjectName();
        cout << "\t\t\t-------------------------------- Check Records -------------------------------------" << endl << endl;
        cout << "\t\t\t************************************************************************************" << endl << endl;
// Open file        
        ifstream file("file.txt");    
        if (!file) 
		{  
            cout << "File not found!" << endl;
        }
        
        string text;
// Read each line
        while (getline(file, text))  
		{ 
// Print each line 
            cout << text << endl;    
        }
        cout << " Enter any key to return to the main menu.";
        getch();
        system("cls");
    }
};


// Customer class derived from User
class Customer : public User {
	public:
	
// paramitrized constructor
    Customer(string name, string password) : User(name, password) {}

// overridding pure function in derived class
    bool login() override 
	{
// call login function
        return commonLogin();
    }
    
// overridding pure function in derived class
    void menu() override 
	{
// method to display admin menu
        customerMenuLoop();
    }

// loop to display menu 
    void customerMenuLoop() 
	{
        int opt;
        while (true) {
            displayCustomerMainMenu();
            cin >> opt;
// nested while loop
            while (opt > 6 || opt < 0) {
                cout << " Invalid option. Please choose an option between 0-6" << endl;
                cout << " Enter your option...";
                cin >> opt;
            }

            switch (opt) {
                case 1: checkAvailableCar(); break;
                case 2: updateProfileDetails(); break;
                case 3: viewCompanyPolicy(); break;
                case 4: viewBooking(); break;
                case 5: cancelBooking(); break;
                case 6: customerFeedback(); break;
                case 0: cout << endl << " Exiting program ";
				        for (int i = 1; i <= 4; i++) {
				            cout << ".";
				            Sleep(1000);
				        }
						exit(0);break; // Exit the admin menu loop
            }
        }
    }

// method to Select Your Car 
    void checkAvailableCar() 
	{
        system("cls");
        ProjectName(); 
        cout << "\t\t\t-------------------------------- Select Your Car -----------------------------------" << endl << endl;
        cout << "\t\t\t************************************************************************************" << endl << endl;
             
        cout << " There Are Two Types Of Car Available " << endl << endl;
        cout << " 1.For Bridal Couple." << endl;
        cout << " 2.For Normal Booking." << endl << endl;
        cout << " Enter your option...";
        cin >> choice;
        cout << endl << " Enter Any Key To Continue: ";
        getch();
        system("cls");
        ProjectName(); 
        cout << "\t\t\t-------------------------------- Select Your Car -----------------------------------" << endl << endl;
        cout << "\t\t\t************************************************************************************" << endl << endl;
            
// Switch for selection of different car
        switch (choice) {
// Bridal Cars
            case 1: { 
                cout << "   Car Name \t\t Rent Per Day \t\t Speed \t\t\t Seats \t\t Lincence No " << endl << endl;
                cout << "1. Bugatti \t\t 200000 \t\t 340km/h \t\t 2 Seater \t HGFV56" << endl;
                cout << "2. Porsche \t\t 180000 \t\t 490km/h \t\t 2 Seater \t ZCNK898" << endl;
                cout << "3. Range Rover \t\t 160000 \t\t 250km/h \t\t 4 Seater \t MXCBJJ8" << endl;
                cout << "4. Ford Mustang \t 140000 \t\t 250km/h \t\t 4 Seater \t NBHJFK8" << endl;
                cout << "5. Ferrari \t\t 220000 \t\t 350km/h \t\t 2 Seater \t HSGUYF6" << endl;
                cout << "6. Lamborghini \t\t 210000 \t\t 340km/h \t\t 2 Seater \t KSAJI54" << endl;
                cout << "7. Tesla Model S \t 120000 \t\t 250km/h \t\t 5 Seater \t BCXBBJ9" << endl;
                cout << "8. Audi R8 \t\t 190000 \t\t 330km/h \t\t 2 Seater \t NXCB23" << endl << endl;
                cout << " Enter The Option...";
                cin >> Caroption;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Enter Your Booking Date...";
                getline(cin, CustomerInfo::info.bookingDates);
                cout << " Enter The Days For Rent a Car...";
                cin >> dayss;
                cout << " Enter The Number How many Cars You Want To book...";
                cin >> Number;
                                
                switch (Caroption) {
                    case 1:
                        CustomerInfo::info.carsName = "Bugatti"; CustomerInfo::info.rentPerDays = 200000;
                        break;
                    case 2:
                        CustomerInfo::info.carsName = "Porsche"; CustomerInfo::info.rentPerDays = 180000;
                        break;
                    case 3:
                        CustomerInfo::info.carsName = "Range Rover"; CustomerInfo::info.rentPerDays = 160000;
                        break;
                    case 4:
                        CustomerInfo::info.carsName = "Ford Mustang"; CustomerInfo::info.rentPerDays = 140000;
                        break;
                    case 5:
                        CustomerInfo::info.carsName = "Ferrari"; CustomerInfo::info.rentPerDays = 220000;
                        break;
                    case 6:
                        CustomerInfo::info.carsName = "Lamborghini"; CustomerInfo::info.rentPerDays = 210000;
                        break;
                    case 7:
                        CustomerInfo::info.carsName = "Tesla Model S"; CustomerInfo::info.rentPerDays = 120000;
                        break;
                    case 8:
                        CustomerInfo::info.carsName = "Audi R8"; CustomerInfo::info.rentPerDays = 190000;
                        break;
                }
                                
                if(Caroption >=1 && Caroption <=8) {
                    CustomerInfo::info.dayss = dayss;
                    CustomerInfo::info.numberOfCarss = Number;
                    total += CustomerInfo::info.rentPerDays * dayss * Number;
                    
                    cout << " The Rent Of " << Number << " " << CustomerInfo::info.carsName << " for " << dayss << " days is = " << total << ".\n";
                    
                    cout << endl << endl << " Your Information Is Saving. Please Wait ";
                    for (int i = 1; i <= 4; i++) {
                        cout << "!";
                        Sleep(1000);
                    }
                    
                    cout << endl << " Information saved successfully!" << endl;
                    cout << " If You Want To Book More Cars Then Visit The Main Menu." << endl << endl;
                    
                    cout << " Enter Any Key To Visit The Main Menu to Select More Cars. Otherwise, Give Your Journey Details: ";
                    getch();
                    system("cls");
                } else {
                    cout << " Invalid Option! Please select a valid car.\n";
                    cout << " Enter Any Key To Visit The Main Menu: ";
                    getch();
                    system("cls");
                }
                break;
            }
 
// Normal Cars                       
            case 2: { 
                cout << "   Car Name \t\t Rent Per Day \t Speed \t\t Seats \t\t Lincence No " << endl << endl;
                cout << "1. Toyota Corolla \t 80000 \t\t 180km/h \t 5 Seater \t DR1V3R" << endl;
                cout << "2. Honda Civic \t\t 90000 \t\t 200km/h \t 5 Seater \t SP33DY" << endl;
                cout << "3. Suzuki Alto \t\t 50000 \t\t 140km/h \t 4 Seater \t VCG6YB" << endl;
                cout << "4. Kia Sportage \t 90000  \t 220km/h \t 5 Seater \t JGGH56V" << endl;
                cout << "5. Hyundai Tucson \t 95000 \t\t 210km/h \t 5 Seater \t DE56NH" << endl;
                cout << "6. Nissan Sunny \t 70000 \t\t 180km/h \t 4 Seater \t 34DWNJ" << endl;
                cout << "7. Toyota Hiace \t 98000  \t 160km/h \t 12 Seater \t 98FRWS" << endl;
                cout << "8. Honda BR-V \t\t 85000  \t 200km/h \t 7 Seater \t CFRRD4" << endl << endl;
                
                cout << " Enter The Option...";
                cin >> Normalcar;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Enter Your Booking Date...";
                getline(cin, CustomerInfo::info.bookingDate);
                cout << " Enter The Days For Rent a Car...";
                cin >> days;
                cout << " Enter The Number How many Cars You Want To book...";
                cin >> Number;
                                
// Store selected car details
                switch (Normalcar) {
                    case 1:
                        CustomerInfo::info.carName = "Toyota Corolla"; CustomerInfo::info.rentPerDay = 80000;
                        break;
                    case 2:
                        CustomerInfo::info.carName = "Honda Civic"; CustomerInfo::info.rentPerDay = 90000;
                        break;
                    case 3:
                        CustomerInfo::info.carName = "Suzuki Alto"; CustomerInfo::info.rentPerDay = 50000;
                        break;
                    case 4:
                        CustomerInfo::info.carName = "Kia Sportage"; CustomerInfo::info.rentPerDay = 100000;
                        break;
                    case 5:
                        CustomerInfo::info.carName = "Hyundai Tucson"; CustomerInfo::info.rentPerDay = 95000;
                        break;
                    case 6:
                        CustomerInfo::info.carName = "Nissan Sunny"; CustomerInfo::info.rentPerDay = 70000;
                        break;
                    case 7:
                        CustomerInfo::info.carName = "Toyota Hiace"; CustomerInfo::info.rentPerDay = 120000;
                        break;
                    case 8:
                        CustomerInfo::info.carName = "Honda BR-V"; CustomerInfo::info.rentPerDay = 110000;
                        break;
                }
                                
                if (Normalcar >=1 && Normalcar <=8) {
                    CustomerInfo::info.days = days;
                    CustomerInfo::info.numberOfCars = Number;
                    total += CustomerInfo::info.rentPerDay * days * Number;
                    cout << " The Rent Of " << Number << " " << CustomerInfo::info.carName << " for " << days << " days is, ";
					if(Caroption>=1 && Caroption<=8)
					{
						cout<<" And Also "<< Number <<" Previously selected car is = " << total << ".\n";
					}
					else
					{
						cout<<total;
					}
// Sleep Function for saving customer information
                    cout << endl << endl << " Your Information Is Saving. Please Wait ";
                    for (int i = 1; i <= 4; i++) {
                        cout << "!";
                        Sleep(1000);
                    }
                    
                    cout << endl << " Information saved successfully!" << endl << endl;
                    cout << " Enter Any Key To Visit The Main Menu to Select More Cars. Otherwise, Give Your Journey Details: ";
                    getch();
                    system("cls");
                } else {
                    cout << " Invalid Option! Please select a valid car.\n";
                    cout << " Enter Any Key To Visit The Main Menu: ";
                    getch();
                    system("cls");
                }
                break;
            }
            
            default: {
                cout << " Invalid Option!";
                cout << " Enter any key to return to the main menu.";
                getch();
                system("cls");
                break;
            }
        }
    }

// method to View Booking 
    void viewBooking() 
	{ 
        system("cls");
        ProjectName();
        cout << "\t\t\t-------------------------------- View Booking --------------------------------------" << endl << endl;
        cout << "\t\t\t************************************************************************************" << endl << endl;
        
        cout << endl << "\t\t\t\t\t---------- Customer Details ----------" << endl << endl;
        cout << " Customer Name: " << CustomerInfo::info.newName << endl;
        cout << " Father's Name: " << CustomerInfo::info.newFatherName << endl;
        cout << " National ID: " << CustomerInfo::info.newId << endl;
        cout << " Phone Number: " << CustomerInfo::info.newPhonenumber << endl;
        cout << " Enter Adress: " << CustomerInfo::info.newAddress << endl;
        cout << endl << "\t\t\t\t\t---------- Booked Car Details --------" << endl << endl;	
        cout << " Normal Cars Info \t\t\t Bridal Cars Info "<< endl << endl;			
        cout << " Car Name: " << CustomerInfo::info.carName << " \t\t\t Car Name: " << CustomerInfo::info.carsName << endl;
        cout << " Rent Per Day: " << CustomerInfo::info.rentPerDay << " \t\t\t Rent Per Day: " << CustomerInfo::info.rentPerDays << endl;
        cout << " Booking Date: " << CustomerInfo::info.bookingDate << " \t\t\t Booking Date: "<< CustomerInfo::info.bookingDates << endl;
        cout << " Number of Days: " << CustomerInfo::info.days << " \t\t\t Number of Days: " << CustomerInfo::info.dayss << endl;
        cout << " Number of Cars: " << CustomerInfo::info.numberOfCars << " \t\t\t Number of Cars: " << CustomerInfo::info.numberOfCarss  << endl;
        cout << endl << " Enter any key to return to the main menu.";
        getch();
        system("cls");
    }

// method to Company Policy
    void viewCompanyPolicy() 
	{  
        system("cls");    
        ProjectName();
        cout << "\t\t\t------------------------------ Company Policy --------------------------------------" << endl << endl;
        cout << "\t\t\t************************************************************************************" << endl << endl;
        
        cout << " 1. All rentals require a valid driver's license and credit card." << endl;
        cout << " 2. Minimum rental age is 21 years." << endl;
        cout << " 3. Smoking is prohibited in all vehicles." << endl;
        cout << " 4. Pets are allowed only in designated vehicles." << endl;
        cout << " 5. Vehicles must be returned with the same amount of fuel as when rented." << endl;
        cout << " 6. Late returns will incur additional charges." << endl;
        cout << " 7. Damage to vehicles will be charged to the renter." << endl;
        cout << " 8. No refunds for early returns." << endl;
        
        cout << endl << " Enter any key to return to the main menu.";
        getch();
        system("cls");
    }

// method to Update Profile Details
    void updateProfileDetails() 
	{
        system("cls");  
        ProjectName();
        cout << "\t\t\t-------------------------------- Profile Details -----------------------------------" << endl << endl;
        cout << "\t\t\t************************************************************************************" << endl << endl;
        
        cin.ignore();
        cout << " Enter Your Name: ";
        getline(cin, CustomerInfo::info.newName);
        cout << " Enter Father Name: ";      
        getline(cin, CustomerInfo::info.newFatherName);
        cout << " Enter Id Number: ";
        getline(cin, CustomerInfo::info.newId);
        cout << " Enter Phone Number: ";
        getline(cin, CustomerInfo::info.newPhonenumber);
        cout << " Enter Adress: ";
        getline(cin, CustomerInfo::info.newAddress);
        
        cout << endl << " Profile Detail Saving ";
        for (int i = 1; i <= 4; i++) {
            cout << ".";
            Sleep(1000);
        }

        cout << endl << " Profile details Saved successfully!" << endl;
        cout << " Enter any key to return to the main menu.";
        getch();
        system("cls");
    }

// method to Cancel Booking
    void cancelBooking() 
	{      
        system("cls");
        ProjectName();
        cout << "\t\t\t------------------------------ Cancel Booking --------------------------------------" << endl << endl;
        cout << "\t\t\t************************************************************************************" << endl << endl;
        
        cout << " Are you sure you want to cancel your booking? (Y/N): ";
        char confirm;
        cin >> confirm;
        
        if (confirm == 'Y' || confirm == 'y')
		{
// Reset all booking information
            CustomerInfo::info.carName = "";
            CustomerInfo::info.carsName = "";
            CustomerInfo::info.rentPerDay = 0;
            CustomerInfo::info.rentPerDays = 0;
            CustomerInfo::info.bookingDate ="";
            CustomerInfo::info.bookingDates ="";
            CustomerInfo::info.days = 0;
            CustomerInfo::info.dayss = 0;
            CustomerInfo::info.numberOfCars = 0;
            CustomerInfo::info.numberOfCarss = 0;
            total = 0;
            
            cout << endl << " Cancelling booking ";
            for (int i = 1; i <= 4; i++) 
			{
                cout << ".";
                Sleep(1000);
            }          
            cout << endl << " Booking cancelled successfully!" << endl;
        } 
		else
		{
            cout << " Booking not cancelled." << endl;
        }
        
        cout << " Enter any key to return to the main menu.";
        getch();
        system("cls");
    }
    
// method to Customer Feedback 
    void customerFeedback()
	{      
        system("cls");      
        ProjectName();
        cout << "\t\t\t------------------------------ Customer Feedback -----------------------------------" << endl << endl;
        cout << "\t\t\t************************************************************************************" << endl << endl;
        
        cout << " Please enter your feedback: ";
        cin.ignore();
        getline(cin, CustomerInfo::info.feedback);
        
        cout << endl << " Saving feedback ";
        for (int i = 1; i <= 4; i++) {
            cout << ".";
            Sleep(1000);
        }
        
        cout << endl << " Thank you for your feedback!" << endl;
        cout << " Enter any key to return to the main menu.";
        getch();
        system("cls");
    }
};

// Main function

int main() {
    system("cls");
    cout << R"( 
					     __        __   _                             
					     \ \      / /__| | ___ ___  _ __ ___   ___ 
					      \ \ /\ / / _ \ |/ __/ _ \| '_ ` _ \ / _ \
					       \ V  V /  __/ | (_| (_) | | | | | |  __/
					        \_/\_/ \___|_|\___\___/|_| |_| |_|\___|
				 		
				            +-------------------------------------------+
			                    ¦                                           ¦
			                    ¦       CAR RENTAL MANAGEMENT SYSTEM        ¦
			                    ¦                                           ¦
			                    +-------------------------------------------+        
    )" << endl;

    cout << "\n Press Enter to continue...";
    getch(); // waits for key press

    int mainChoice;


    while (true) {
        system("cls");
        ProjectName();
        cout << "\t\t\t-------------------------- Welcome To Login Page -----------------------------------" << endl << endl;
        cout << "\t\t\t************************************************************************************" << endl << endl;
        
        cout << " 1. Admin Login" << endl;
        cout << " 2. Customer Login" << endl;
        cout << " 0. Exit" << endl << endl;
        cout << " Enter your option...";
        cin >> mainChoice;
        
        switch (mainChoice) {
            case 1: 
			{
				cout << "\n Press Enter to continue...";
        		getch();
		        system("cls");
		        ProjectName();
// dynamically call using polymorphism (Run-time Polymorphism)

                User* user = new Admin("admin", "admin123");
                if (user->login()) 
				{
					cout << "\n Press Enter to continue...";
        			getch();
                    user->menu();
                }
                delete user;
                break;
            }
            case 2: 
			{
				cout << "\n Press Enter to continue...";
        		getch();
		        system("cls");
		        ProjectName();
		        
                User* user = new Customer("customer", "customer123");
                if (user->login() )
				{
					cout << "\n Press Enter to continue...";
        			getch();
					
                    user->menu();
                }
                delete user;
                break;
            }
            case 0:
			{
				cout << endl << " Exiting program ";
		        for (int i = 1; i <= 4; i++) {
		            cout << ".";
		            Sleep(1000);
		        }
                return 0;
            }
            default: 
			{
                cout << " Invalid option! Please try again." << endl;
                cout << " Enter any key to continue...";
                getch();
                break;
            }
        }
  }
    return 0;
}
