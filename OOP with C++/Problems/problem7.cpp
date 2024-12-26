//  Demonstrate use of scope resolution operator using multiple initializations of the variable. 

#include <iostream>
using namespace std;

// Global variable
int x = 10;

class Demo {
public:
    // Class-level static variable
    static int x;

    // Method to display and modify variables
    void display() {
        int x = 5;  // Local variable

        cout << "Local x: " << x << endl;
        cout << "Class-level x: " << Demo::x << endl;
        cout << "Global x: " << ::x << endl;

        // Modify each x
        x += 2;             // Modifies local x
        Demo::x += 3;       // Modifies class-level x
        ::x += 5;           // Modifies global x

        cout << "After modification:\n";
        cout << "Local x: " << x << endl;
        cout << "Class-level x: " << Demo::x << endl;
        cout << "Global x: " << ::x << endl;
    }
};

// Initialize class static variable
int Demo::x = 20;

int main() {
    Demo obj;
    obj.display();
    return 0;
}
