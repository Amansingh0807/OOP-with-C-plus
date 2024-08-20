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
