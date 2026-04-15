#include <iostream>
#include <string>
using namespace std;

// Class 1
class BankAccount {
public:
    int accountnumber;
    int balance;

    BankAccount() 
	{
        accountnumber = 102938;
        balance = 0; // Initialize balance to zero
    }

    void deposit(int amount) 
	{
        if (amount > 5000000000) {
            cout << "You can't deposit more than 50,00,000,000 per day." << endl;
        } else if (amount <= 0) {
            cout << "Deposit amount must be greater than zero." << endl;
        } else {
            balance += amount;
            cout << "You have successfully deposited: " << amount << endl;
        }
    }

    void withdraw(int amount) 
	{
        if (amount > balance) {
            cout << "Ahh! You can't withdraw more than your current balance." << endl;
        } else if (amount <= 0) {
            cout << "Withdrawal amount must be greater than zero." << endl;
        } else {
            balance -= amount;
            cout << "You have successfully withdrawn: " << amount << endl;
        }
    }

    void displayAccountDetails() {
        cout << "Your Account Number is: " << accountnumber << endl;
        cout << "The current balance of your account is: " << balance << endl;      
    }
};

// Class 2
class SavingsAccount : public BankAccount {
public:
	int total;
	
    void interest(int interest_rate, int interest_time) {
    	
        // Use correct formula for Simple Interest
        int calculate_interest = (balance * interest_rate * interest_time) / 100;
        cout << "The interest on your balance is " << calculate_interest << " in "<< interest_time << " years at the rate of " << interest_rate << "%." << endl;
    	total=balance+calculate_interest;
		cout<<"So, Your Current Balance is after Interest is :"<<total;
	}
};

//class 3

class PremiumSavingsAccount:public SavingsAccount
{
	public:
		int bonus=0;
	
	void Bonus()
	{
		
		if(balance<100000)
		{
			cout<<"You Can't get bonus on less then 100000 amount:.";
		}
		else if(balance>100000 && balance<200000)
		{
			bonus=balance*0.10;
			cout<<"You Got 10% Bonus At This Balance."<<endl;
			cout<<"The Total Bonus Amount Is :"<<bonus<<endl;
			total +=bonus;
			cout<<"Your Current Bank Balance after Interest And Bonus is :"<<total;
		}
		else if(balance>200000 && balance<500000)
		{
			bonus=balance*0.25;
			cout<<"You Got 25% Bonus At This Balance."<<endl;
			cout<<"The Total Bonus Amount Is :"<<bonus<<endl;
			total +=bonus;
			cout<<"Your Current Bank Balance after Interest And Bonus is :"<<total;			
		}
		else
		{
			bonus=balance*0.35;
			cout<<"You Got 35% Bonus At This Balance."<<endl;
			cout<<"The Total Bonus Amount Is :"<<bonus<<endl;
			total +=bonus;
			cout<<"Your Current Bank Balance after Interest And Bonus is :"<< total;			
		}		
	}
};

// Main Function
int main() {
	
    PremiumSavingsAccount obj;
    int depositAmount, withdrawAmount, rate, time;
    
	cout<<"Transcation Details."<<endl;
    cout << "Enter the amount you want to deposit: ";
    cin >> depositAmount;
    obj.deposit(depositAmount);

    cout << "Enter the amount you want to withdraw: ";
    cin >> withdrawAmount;
    obj.withdraw(withdrawAmount);

    obj.displayAccountDetails();
    cout << endl << endl;

    cout << "The interest on the balance is. " << endl;
    cout << "Enter the rate in (%): ";
    cin >> rate;
    cout << "Enter the time in years: ";
    cin >> time;

    obj.interest(rate, time);
    cout<<endl;
    cout<<"The Bonus Details."<<endl;
    cout<<endl;
    obj.Bonus();
    

    return 0;
}

