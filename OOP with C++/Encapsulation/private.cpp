#include <iostream>
using namespace std;

// Here name and age are private members, so they cannot be accessed directly from outside the class.
// Access to these private members is provided through public methods (setName, getName, setAge, getAge).



class Student {
private:
    string name;
    int age;

public:
    // Setter for name
    void setName(string studentName) {
        name = studentName;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Setter for age
    void setAge(int studentAge) {
        if (studentAge > 0) { // Validating age
            age = studentAge;
        } else {
            cout << "Invalid age. Please enter a positive number.\n";
        }
    }

    // Getter for age
    int getAge() {
        return age;
    }
};

int main() {
    Student student1;

    // Setting values using setters
    student1.setName("Aman Singh");
    student1.setAge(20);

    // Getting values using getters
    cout << "Student Name: " << student1.getName() << endl;
    cout << "Student Age: " << student1.getAge() << endl;

    return 0;
}
