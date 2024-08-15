// CONSTRUCTOR AND DESTRUCTOR 


#include <iostream>
using namespace std;
                      

                        // Define a class named Customer
class Customer {
                        // Public access specifier - these members can be accessed from outside the class
    public:
    
                         // Class member variables
    string name;        // To store the customer's name
    int roll_number;    // To store the customer's roll number
    int money;          // To store the customer's money

                         // Default constructor
                        // This is called automatically when a Customer object is created without parameters
    Customer() {
                         // Print a message when the constructor is called
        cout << "I am a disco dancer";
    }
};

                        // Main function - the entry point of the program
int main() {
                        // Create a Customer object named a1
                        // This will automatically call the default constructor
    Customer a1;
    
                        // The program ends here. Since we haven't added any more code,
                        // it will just create the object and exit.
    return 0;
}


// if you wish to give some values and call them you can do that too inside the class 

#include <iostream>
using namespace std;

class Customer {
                            // Private members (by default in C++)
    string name;
    int roll_number;
    int money;

public:
                            // Default constructor
    Customer() {
        name = "aman singh";
        roll_number = 101;
        money = 100000;
    }

                            // Parameterized constructor
    Customer(string a, int b, int c) {
        name = a;
        roll_number = b;
        money = c;
    }

                              // Member function to display customer details
    void display() {
        cout << name << " " << roll_number << " " << money << endl;
    }
};

int main() {
                              // Create a Customer object using the default constructor
    Customer a1;
    
                              // Call the display method to show customer details
    a1.display();

    return 0;
}