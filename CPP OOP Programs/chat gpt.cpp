#include<iostream>
#include<string>
#include<windows.h> // for Sleep function
#include<conio.h>  // for getch function
#include<limits>   // for numeric_limits
using namespace std;

// Structure to store customer information
struct CustomerInfo {
    string name;
    string father;
    int age;
    string id; // Changed to string to handle long numbers better
    string phonenumber; // Changed to string to handle long numbers better
    string address;
    string occupation;
    string pickup;
    string drop;
    int km; // Distance for journey

    static CustomerInfo info; // Static instance to retain information
};

// Initialize the static instance
CustomerInfo CustomerInfo::info;

// Function to display the main menu
void displayMainMenu() {
    cout << endl << "\t\t\t************************************************************************************" << endl << endl;
    cout << "\t\t\t------------------------------- CAR RENTAL SYSTEM ----------------------------------" << endl << endl;
    cout << "\t\t\t************************************************************************************" << endl << endl;
    cout << "\t\t\t----------------------------- Welcome To The Main Menu -----------------------------" << endl << endl;
    cout << "\t\t\t************************************************************************************" << endl << endl;

    cout << "  1.Enter Customer information: " << endl;
    cout << "  2.Car Selection For Rent: " << endl;  
    cout << "  3.Enter the Journey Information: " << endl;
    cout << "  4.Generate Payment Receipt: " << endl;
    cout << "  5.Transaction Details: " << endl;
    cout << "  6.Add A Car: " << endl;
    cout << "  7.View All Records: " << endl;
    cout << "  0.Logout: " << endl << endl;

    cout << " Enter your option...";
}
// Function to Display the Name of Project
void ProjectName()
{
	cout << endl << "\t\t\t************************************************************************************" << endl << endl;
    cout << "\t\t\t-------------------------------- CAR RENTAL SYSTEM ---------------------------------" << endl << endl;
    cout << "\t\t\t************************************************************************************" << endl << endl;
}

class menu {
public:
    // Data members
    int opt, age, choice, Caroption, days, Number, Normalcar, km, final;
    string father, address, occupation, type, name, pickup, drop;
    double id, phonenumber;
    float discount;
    static int total; // Static variable to store total rent

    // Default Constructor to show the main menu
    menu() 
    {
        displayMainMenu(); // Use the function here
        cin >> opt;
        while (opt > 7 || opt < 0) 
        {
            cout << "Invalid option. Please choose an option between 1-7" << endl;
            cout << " Enter your option...";
            cin >> opt;
        }

        // Using Switch Cases
        switch (opt) 
        {
            // Case 1 for Customer Details
            case 1: 
            {
                cout << endl << " Enter Any Key To Continue: ";
                getch();
                system("cls");

                ProjectName(); // Function to Display the Name of Project
                cout << "\t\t\t----------------------------- Enter Customer Details -------------------------------" << endl << endl;
                cout << "\t\t\t************************************************************************************" << endl << endl;

                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clearing buffer before using getline

                cout << "Enter your name: ";
                getline(cin, CustomerInfo::info.name);
                cout << "Enter your father's name: ";
                getline(cin, CustomerInfo::info.father);
                cout << "Enter your Birth Year: ";
                cin >> CustomerInfo::info.age;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clearing buffer

                cout << "Enter your National ID: ";
                getline(cin, CustomerInfo::info.id); // Reading ID as a string
                cout << "Enter your Phone Number: ";
                getline(cin, CustomerInfo::info.phonenumber); // Reading phone number as a string
                cout << "Enter your address: ";
                getline(cin, CustomerInfo::info.address);
                cout << "Enter your Occupation: ";
                getline(cin, CustomerInfo::info.occupation);

                // Sleep Function for saving customer information
                cout << endl << "Your Information Is Saving. Please Wait ";
                for (int i = 1; i <= 4; i++) {
                    cout << "!";
                    Sleep(1000);
                }

                cout << endl << "Information saved successfully!" << endl << endl;

                cout << "Enter Any Key To Visit The Main Menu: ";
                getch();
                system("cls");

                // Go back to the main menu Recursively call the menu constructor
                menu(); 
            }

            // Case 2 for car selection
            case 2:
            {
                cout << endl << " Enter Any Key To Continue: ";
                getch();
                system("cls");

                ProjectName(); // Function to Display the Name of Project
                cout << "\t\t\t-------------------------------- Select Your Car -----------------------------------" << endl << endl;
                cout << "\t\t\t************************************************************************************" << endl << endl;

                cout << "There Are Two Types Of Car Available " << endl << endl;
                cout << " 1.For Bridal Couple." << endl;
                cout << " 2.For Normal Booking." << endl << endl;
                cout << " Enter your option...";
                cin >> choice;
                cout << endl << " Enter Any Key To Continue: ";
                getch();
                system("cls");

                ProjectName(); // Function to Display the Name of Project
                cout << "\t\t\t-------------------------------- Select Your Car -----------------------------------" << endl << endl;
                cout << "\t\t\t************************************************************************************" << endl << endl;

                // Switch for selection of different car
                switch (choice)
                {
                    case 1:
                    {
                        cout << "   Car Name \t\t Rent Per Day \t\t Speed \t\t\t Seats \t\t Lincence No " << endl << endl;
					    cout << "1. Bugatti \t\t 200000 \t\t 340km/h \t\t 2 Seater \t HGFV56" << endl;
					    cout << "2. Porsche \t\t 180000 \t\t 490km/h \t\t 2 Seater \t ZCNK898" << endl;
					    cout << "3. Range Rover \t\t 160000 \t\t 250km/h \t\t 4 Seater \t MXCBJJ8" << endl;
					    cout << "4. Ford Mustang \t 140000 \t\t 250km/h \t\t 4 Seater \t NBHJFK8" << endl;
					    cout << "5. Ferrari \t\t 220000 \t\t 350km/h \t\t 2 Seater \t HSGUYF6" << endl;
					    cout << "6. Lamborghini \t\t 210000 \t\t 340km/h \t\t 2 Seater \t KSAJI54" << endl;
					    cout << "7. Tesla Model S \t 120000 \t\t 250km/h \t\t 5 Seater \t BCXBBJ9" << endl;
					    cout << "8. Audi R8 \t\t 190000 \t\t 330km/h \t\t 2 Seater \t NXCB23" << endl << endl;
                        cout << "Enter The Option...";
                        cin >> Caroption;
                        cout << "Enter The Days For Rent a Car...";
                        cin >> days;
                        cout << "Enter The Number Of the How many Cars You Want To book...";
                        cin >> Number;

                        // Nested switch for calculating the rent
                        switch (Caroption)
                        {
                        case 1:
						    total += 200000 * days * Number;
						    cout << "The Rent Of " << Number << " Bugatti for " << days << " days is = " << total << ";\n";						   
						    break;
						case 2:
						    total += 180000 * days * Number;
						    cout << "The Rent Of " << Number << " Porsche for " << days << " days is = " << total << ";\n";
						    break;
						case 3:
						    total += 160000 * days * Number;
						    cout << "The Rent Of " << Number << " Range Rover for " << days << " days is = " << total << ";\n";
						    break;
						case 4:
						    total += 140000 * days * Number;
						    cout << "The Rent Of " << Number << " Ford Mustang for " << days << " days is = " << total << ";\n";
						    break;
						case 5:
						    total += 220000 * days * Number;
						    cout << "The Rent Of " << Number << " Ferrari for " << days << " days is = " << total << ";\n";
						    break;
						case 6:
						    total += 210000 * days * Number;
						    cout << "The Rent Of " << Number << " Lamborghini for " << days << " days is = " << total << ";\n";
						    break;
						case 7:
						    total += 120000 * days * Number;
						    cout << "The Rent Of " << Number << " Tesla Model S for " << days << " days is = " << total << ";\n";
						    break;
						case 8:
						    total += 190000 * days * Number;
						    cout << "The Rent Of " << Number << " Audi R8 for " << days << " days is = " << total << ";\n";
						    break;
						default:
						    cout << "Invalid Option! Please select a valid car.\n";
						    break;

                        }

                        // Sleep Function for saving customer information
                        cout << endl << endl << "Your Information Is Saving. Please Wait ";
                        for (int i = 1; i <= 4; i++) {
                            cout << "!";
                            Sleep(1000);
                        }

                        cout << endl << "Information saved successfully!" << endl;
                        cout << "If You Want To Book More Cars Then Visit The Main Menu." << endl << endl;

                        cout << "Enter Any Key To Visit The Main Menu to Select More Cars. Otherwise, Give Your Journey Details: ";
                        getch();
                        system("cls");

                        // Go back to the main menu Recursively call the menu constructor
                        menu();
                    } // Nested case 1 for couples car ends here

                    // Case 2 for normal car selection
                    case 2:
                    {
                        cout << "   Car Name \t\t Rent Per Day \t Speed \t\t Seats \t\t Lincence No " << endl << endl;
                        cout << "1. Toyota Corolla \t 80000 \t\t 180km/h \t 5 Seater \t DR1V3R" << endl;
                        cout << "2. Honda Civic \t\t 90000 \t\t 200km/h \t 5 Seater \t SP33DY" << endl;
                        cout << "3. Suzuki Alto \t\t 50000 \t\t 140km/h \t 4 Seater \t VCG6YB" << endl;
                        cout << "4. Kia Sportage \t 100000 \t 220km/h \t 5 Seater \t JGGH56V" << endl;
                        cout << "5. Hyundai Tucson \t 95000 \t\t 210km/h \t 5 Seater \t DE56NH" << endl;
                        cout << "6. Nissan Sunny \t 70000 \t\t 180km/h \t 4 Seater \t 34DWNJ" << endl;
                        cout << "7. Toyota Hiace \t 120000 \t 160km/h \t 12 Seater \t 98FRWS" << endl;
                        cout << "8. Honda BR-V \t\t 110000 \t 200km/h \t 7 Seater \t CFRRD4" << endl << endl;

                        cout << "Enter The Option...";
                        cin >> Normalcar;
                        cout << "Enter The Days For Rent a Car...";
                        cin >> days;
                        cout << "Enter The Number Of the How many Cars You Want To book...";
                        cin >> Number;

                        // Switch for calculating rent for normal and family cars
                        switch (Normalcar)
                        {
                            case 1:
							    total += 80000 * days * Number;
							    cout << "The Rent Of " << Number << " Toyota Corolla for " << days << " days is = " << total << ";\n";
							    break;
							case 2:
							    total += 90000 * days * Number;
							    cout << "The Rent Of " << Number << " Honda Civic for " << days << " days is = " << total << ";\n";
							    break;
							case 3:
							    total += 50000 * days * Number;
							    cout << "The Rent Of " << Number << " Suzuki Mehran for " << days << " days is = " << total << ";\n";
							    break;
							case 4:
							    total += 100000 * days * Number;
							    cout << "The Rent Of " << Number << " Kia Sportage for " << days << " days is = " << total << ";\n";
							    break;
							case 5:
							    total += 95000 * days * Number;
							    cout << "The Rent Of " << Number << " Hyundai Tucson for " << days << " days is = " << total << ";\n";
							    break;
							case 6:
							    total += 70000 * days * Number;
							    cout << "The Rent Of " << Number << " Nissan Sunny for " << days << " days is = " << total << ";\n";
							    break;
							case 7:
							    total += 120000 * days * Number;
							    cout << "The Rent Of " << Number << " Toyota Hiace for " << days << " days is = " << total << ";\n";
							    break;
							case 8:
							    total += 110000 * days * Number;
							    cout << "The Rent Of " << Number << " Honda BR-V for " << days << " days is = " << total << ";\n";
							    break;
							default:
							    cout << "Invalid Option! Please select a valid car.\n";
							    break;

                        }

                        // Sleep Function for saving customer information
                        cout << endl << endl << "Your Information Is Saving. Please Wait ";
                        for (int i = 1; i <= 4; i++) {
                            cout << "!";
                            Sleep(1000);
                        }

                        cout << endl << "Information saved successfully!" << endl << endl;

                        cout << "Enter Any Key To Visit The Main Menu to Select More Cars. Otherwise, Give Your Journey Details: ";
                        getch();
                        system("cls");

                        // Go back to the main menu Recursively call the menu constructor
                        menu();
                    } // Nested case 2 for normal cars ends here
                } // Nested main switch ends here
            } // Main case 2 ends here

            // Case 3 for journey information
            case 3:
            {
                cout << endl << " Enter Any Key To Continue: ";
                getch();
                system("cls");
                ProjectName(); // Function to Display the Name of Project
                cout << "\t\t\t----------------------------- Enter Journey Details -------------------------------" << endl << endl;
                cout << "\t\t\t************************************************************************************" << endl << endl;

                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Enter The PickUp Point: ";
                getline(cin, CustomerInfo::info.pickup);
                cout << "Enter The Drop Point: ";
                getline(cin, CustomerInfo::info.drop);
                cout << "Enter The Distance In Km If Distance Is More Than 200Km You Will Get 15% Discount: ";
                cin >> CustomerInfo::info.km;

                // Sleep Function for saving customer information
                cout << endl << endl << "Your Information Is Saving. Please Wait ";
                for (int i = 1; i <= 4; i++) {
                    cout << "!";
                    Sleep(1000);
                }

                cout << endl << "Information saved successfully!" << endl << endl;

                cout << "Enter Any Key To Visit The Main Menu For Bill Receipt: ";
                getch();
                system("cls");

                // Go back to the main menu Recursively call the menu constructor
                menu();
            } // Case 3 ends here

            // Case 4 for payment receipt generation
            case 4:
            {
                cout << endl << " Enter Any Key To Continue: ";
                getch();
                system("cls");
                ProjectName(); // Function to Display the Name of Project
                cout << "\t\t\t-----------------------------  Payment Bill Receipt -------------------------------" << endl << endl;
                cout << "\t\t\t************************************************************************************" << endl << endl;

                // Calculate discount if distance is more than 200 km
                if (CustomerInfo::info.km > 200) {
                    discount = 0.15 * total;
                } else {
                    discount = 0;
                }

                cout << "Customer Name: " << CustomerInfo::info.name << endl;
                cout << "Father's Name: " << CustomerInfo::info.father << endl;
                cout << "National ID: " << CustomerInfo::info.id << endl;
                cout << "Phone Number: " << CustomerInfo::info.phonenumber << endl;
                cout << "Pickup Point: " << CustomerInfo::info.pickup << endl;
                cout << "Drop Point: " << CustomerInfo::info.drop << endl;
                cout << "Total Rent: " << total << endl;
                cout << "Discount: " << discount << endl;
                final = total - discount;
                cout << "Final Amount: " << final << endl;

                cout << "Enter Any Key To Visit The Main Menu: ";
 getch               ();
                system("cls");

                // Go back to the main menu Recursively call the menu constructor
                menu();
            } // Case 4 ends here
        } // Switch ends here
    } // Default constructor ends here
}; // Class ends here

int menu::total = 0; // Initialize the static variable

int main()
{
    // Display Name Of Project
    ProjectName();

    string regname, regpass, loginname, loginpass;

    // Create your Account
    cout << "\t\t\t\t\t      ********* Register Yourself *********" << endl << endl;
    cout << "Enter Your Name: ";
    getline(cin, regname);
    cout << "Enter Your Password: ";
    getline(cin, regpass);

    // Sleep Function for creating account
    cout << "Your Account Is Creating. Please Wait ";
    for (int i = 1; i <= 4; i++) {
        cout << "!";
        Sleep(1000);
    }

    cout << endl << endl << endl << "\t\t\t\t\t\t  ********* Registered Successfully!! **********" << endl << endl;

    // Login starts here
    cout << "\t\t\t\t\t   ************** Login Yourself **************" << endl << endl;
    cout << "Enter Your Name: ";
    getline(cin, loginname);
    cout << "Enter Your Password: ";
    getline(cin, loginpass);
    cout << endl << endl;

    if (regname == loginname && regpass == loginpass) {
        cout << "\t\t\t\t\t   ********* Logged In Successfully!! *********" << endl << endl;
    } else {
        for (int i = 3; i >= 1; i--) {
            if (regname != loginname || regpass != loginpass) {
                cout << "\t\t\t\t\t\t   ********* Remaining Attempts " << i << " *********" << endl << endl;
            }

            if (regname != loginname && regpass != loginpass) {
                cout << "You Entered The Wrong Username and Password!!" << endl << endl;
                cout << "Enter Your Name: ";
                getline(cin, loginname);
                cout << "Enter Your Password: ";
                getline(cin, loginpass);
                cout << endl << endl;
            } else if (regname != loginname) {
                cout << "YouEntered The Wrong Username." << endl << endl;
                cout << "Enter Your Name: ";
                getline(cin, loginname);
                cout << "Enter Your Password: ";
                getline(cin, loginpass);
                cout << endl << endl;
            } else if (regpass != loginpass) {
                cout << "You Entered The Wrong Password." << endl << endl;
                cout << "Enter Your Name: ";
                getline(cin, loginname);
                cout << "Enter Your Password: ";
                getline(cin, loginpass);
                cout << endl << endl;
            }
        }

        if (regname == loginname && regpass == loginpass) {
            cout << "You Entered the Correct Username or Password !!" << endl << endl;
            cout << "\t\t\t\t\t   ********* Logged In Successfully! *********" << endl << endl;
        } else {
            cout << "Sorry, You Have No More Attempts !!";
            return 0; 
        }
    }

    // Sleep Function and getch function
    
    cout << "Enter Any Key To Visit The Main Menu: ";
    getch();
    system("cls");

    // Object1 of menu class
    
    menu obj1;
}
