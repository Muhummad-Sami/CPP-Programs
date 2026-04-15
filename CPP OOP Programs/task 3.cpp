#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    float balance;

public:
    // Constructor to initialize account details
    BankAccount(string accountHolderName, int accountNum, float initialBalance) {
        name = accountHolderName;
        accountNumber = accountNum;
        balance = initialBalance;
    }

    // Deposit money
    void deposit(float amount) {
        balance += amount;
        cout << "Deposited $" << amount << " successfully!" << endl;
    }

    // Withdraw money
    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn $" << amount << " successfully!" << endl;
        }
    }

    // Display account details
    void displayAccountDetails() const {
        cout << "\nAccount Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    string name;
    int accountNum;
    float balance;

    // Get user input for account details
    cout << "Enter account holder's name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accountNum;
    cout << "Enter initial balance: ";
    cin >> balance;

    BankAccount account(name, accountNum, balance);

    int choice;
    float amount;

    // Menu for basic operations
    do {
        cout << "\n1. Display Account Details\n2. Deposit Money\n3. Withdraw Money\n4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                account.displayAccountDetails();
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 4:
                cout << "Exiting... Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

