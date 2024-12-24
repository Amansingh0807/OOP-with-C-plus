// Here is an example of the Scalability of OOP with c++ 


#include <iostream>
#include <vector>
using namespace std;

// Base Class - Employee
class Employee {
protected:
    string name;
    int id;
    float salary;

public:
    Employee(string n, int i, float s) : name(n), id(i), salary(s) {}

    virtual void showDetails() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: ₹" << salary << endl;
    }

    virtual float calculateBonus() = 0;  // Pure virtual function (for scalability)
};

// Derived Class - Developer
class Developer : public Employee {
    string techStack;

public:
    Developer(string n, int i, float s, string t) : Employee(n, i, s), techStack(t) {}

    void showDetails() override {
        cout << "Developer -> ";
        Employee::showDetails();
        cout << "Tech Stack: " << techStack << endl;
    }

    float calculateBonus() override {
        return salary * 0.2;  // 20% bonus for developers
    }
};

// Derived Class - Manager
class Manager : public Employee {
    int teamSize;

public:
    Manager(string n, int i, float s, int t) : Employee(n, i, s), teamSize(t) {}

    void showDetails() override {
        cout << "Manager -> ";
        Employee::showDetails();
        cout << "Team Size: " << teamSize << endl;
    }

    float calculateBonus() override {
        return salary * 0.3;  // 30% bonus for managers
    }
};

// System to handle multiple employees (scalable structure)
class Company {
    vector<Employee*> employees;

public:
    void addEmployee(Employee* e) {
        employees.push_back(e);
    }

    void showAllEmployees() {
        for (auto emp : employees) {
            emp->showDetails();
            cout << "Bonus: ₹" << emp->calculateBonus() << endl;
            cout << "--------------------" << endl;
        }
    }
};

int main() {
    Company company;

    // Adding different types of employees
    company.addEmployee(new Developer("Ram", 101, 700000, "Full Stack"));
    company.addEmployee(new Manager("Shyam", 102, 900000, 10));

    // Display all employees and their bonuses
    company.showAllEmployees();

    return 0;
}


//  let's move to the explanation 
// Encapsulation: Employee details are hidden inside the class, ensuring data integrity.
// Inheritance: Developer and Manager inherit from the Employee class, reusing and extending functionality.
// Polymorphism: showDetails and calculateBonus are overridden in derived classes.
// A vector<Employee*> stores different employee types, demonstrating how the system can easily scale by adding more employee types without modifying existing code.




