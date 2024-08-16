#include <iostream>
#include <string>                           // Added for string class
using namespace std;

class Customer {
    string name;
    int account_num;
    int balance;
    static int total_customer;             // Static member to count total customers

public:
                                         // Constructor
    Customer(string a, int b, int c) {
        name = a;
        account_num = b;
        balance = c;
        total_customer++; // Increment total_customer count when a new object is created
    }

    // Method to display customer information
    void display() {
        cout << name << " " << account_num << " " << balance << " " << total_customer << endl;
    }
};

// Initialize static member outside the class
int Customer::total_customer = 0;

int main() {
    // Create three Customer objects
    Customer a1("aman singh", 1, 1234);
    Customer a2("arun kumar", 2, 4334);
    Customer a3("riya kumari", 3, 1345);

    // Display information for each customer
    a1.display();
    a2.display();
    a3.display();

    return 0;
}

                         // HERE SOME IMPORTANT INFORMATION
// The Customer class is defined with private members: name, account_num, balance, and a static member total_customer.

// The constructor takes three parameters to initialize the object's members. It also increments the total_customer count.