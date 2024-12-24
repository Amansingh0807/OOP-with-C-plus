#include <iostream>
using namespace std;

// Class representing a Bank Account
class BankAccount {
private:
    // Private data members (hidden from direct access)
    string accountHolder;
    double balance;

public:
    // Constructor to initialize account
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = (initialBalance >= 0) ? initialBalance : 0;  // Ensuring balance is non-negative
    }

    // Public method to deposit money (controlled access)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Public method to withdraw money (controlled access)
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. Remaining balance: $" << balance << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Public method to check balance (read-only access)
    double getBalance() {
        return balance;
    }

    // Public method to show account details
    void displayAccountDetails() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

// Main function to demonstrate data hiding
int main() {
    // Creating a BankAccount object
    BankAccount account1("Aman Singh", 500);

    // Accessing data through public methods (no direct access to private members)
    account1.displayAccountDetails();

    // Depositing money
    account1.deposit(200);

    // Attempting to withdraw more than the balance
    account1.withdraw(800);  // Should show an error message

    // Successful withdrawal
    account1.withdraw(300);

    // Checking final balance
    cout << "Final Balance: $" << account1.getBalance() << endl;

    return 0;
}
