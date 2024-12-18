// Code example for maintainablity 



#include <iostream>
#include <string>
using namespace std;

// User class with email verification
class User {
private:
    string username;
    string password;
    string email;

public:
    User(string uname, string pass, string mail) : username(uname), password(pass), email(mail) {}

    bool authenticate(string uname, string pass) {
        return uname == username && pass == password;
    }

    void display() {
        cout << "User: " << username << ", Email: " << email << endl;
    }

    void verifyEmail() {
        cout << "Email verified for " << email << endl;
    }
};

// Order class with discount feature
class Order {
private:
    string orderID;
    double amount;
    double discount;

public:
    Order(string id, double amt, double disc = 0.0) : orderID(id), amount(amt), discount(disc) {}

    void displayOrder() {
        double finalAmount = amount - discount;
        cout << "Order ID: " << orderID << ", Final Amount: Rs " << finalAmount << endl;
    }

    void applyDiscount(double disc) {
        discount = disc;
    }
};

int main() {
    User user1("Alice", "password123", "aman@example.com");
    if (user1.authenticate("Aman", "password123")) {
        cout << "Authentication Successful!" << endl;
        user1.verifyEmail();
    } else {
        cout << "Authentication Failed!" << endl;
    }

    Order order1("ORD1001", 299.99);
    order1.applyDiscount(50.00);
    order1.displayOrder();

    return 0;
}
