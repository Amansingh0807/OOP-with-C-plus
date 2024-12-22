#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Setter for name
    void setName(string n) {
        name = n;
    }
    
    // Getter for name
    string getName() {
        return name;
    }
    
    // Setter for age with validation
    void setAge(int a) {
        if (a > 0)
            age = a;
        else
            cout << "Invalid age!" << endl;
    }

    // Getter for age
    int getAge() {
        return age;
    }
};

int main() {
    Student s;
    s.setName("Aman");
    s.setAge(20);

    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;

    s.setAge(-5);  // Invalid age test
    return 0;
}


// EXPLANATION OF THE CODE 

// The name and age variables are private, directly preventing external modification.
// Public setters and getters provide controlled access, allowing validation which maintains data security while allowing selective modification.