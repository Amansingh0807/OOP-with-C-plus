#include <iostream>
using namespace std;

                                         // Base class
class Person
{
    protected:
    string name;

    public:
    void introduce(){
        cout << "I am a master in the art of management." << endl;
    }
};

                                          // Derived class from Person
class Employee : public Person{
    protected:
    int salary;

    public: 
    void setSalary(int sal){
        salary = sal;
    }

    void showSalary(){
        cout << "Your monthly salary is " << salary << "k$." << endl;
    }
};

                                         // Further derived class from Employee
class Manager: public Employee{
    public:
    void level(){
        cout << "You are at the top management level." << endl;
    }
};

int main(){
    Manager a1;

    a1.introduce();                      // From Person class
    a1.setSalary(2000);                  // From Employee class
    a1.showSalary();                     // From Employee class
    a1.level();                          // From Manager class

    return 0;
}


//______________________________________________________________________________________________________________________________________________________________________

//Another example of Multilevel inheritance 

#include <iostream>
using namespace std;

// Base class
class Vehicle {
    public:
    void start() {
        cout << "Vehicle is starting." << endl;
    }
};

// Derived class from Vehicle
class Car : public Vehicle {
    public:
    void drive() {
        cout << "Car is being driven." << endl;
    }
};

// Further derived class from Car
class ElectricCar : public Car {
    public:
    void charge() {
        cout << "Electric car is charging." << endl;
    }
};

int main() {
    ElectricCar e1;

    e1.start();           // From Vehicle class
    e1.drive();           // From Car class
    e1.charge();          // From ElectricCar class

    return 0;
}
