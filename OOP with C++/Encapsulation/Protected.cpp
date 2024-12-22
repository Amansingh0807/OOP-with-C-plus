//  Protected encapsulation restricts access to class members but allows derived classes to access and modify them.

#include <iostream>
using namespace std;

class Employee {
protected:
    string empID;
    double salary;

public:
    // Public method to initialize protected data
    void setEmployeeDetails(string id, double sal) {
        empID = id;
        salary = sal;
    }

    void display() {
        cout << "Employee ID: " << empID << ", Salary: " << salary << endl;
    }
};

// Derived class
class Manager : public Employee {
public:
    void increaseSalary(double bonus) {
        salary += bonus;  // Direct access to protected member
    }
};

int main() {
    Manager m;
    m.setEmployeeDetails("M123", 50000);
    m.increaseSalary(10000);  // Accessing protected member
    m.display();

    return 0;
}


// EXPLANATION OF THE CODE 

// empID and salary are protected, meaning they are not directly accessible in main(), but Manager (derived class) can access them.The derived class we can modify protected data directly while external classes cannot.