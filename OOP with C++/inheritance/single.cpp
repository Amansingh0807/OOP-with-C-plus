
#include <iostream>                           // Include the input-output stream library
using namespace std;                         // Use the standard namespace

                                             // Define a base class called 'Human'
class Human
{
protected:                    // Protected access modifier, accessible by derived classes
    string name;                // Member variable to store the name of the human
    int age;                       // Member variable to store the age of the human

public:                                // Public access modifier, accessible by everyone
                                             // Member function that prints a message indicating work
    void work()
    {
        cout << "i am working\n";
    }
};

                                            // Define a derived class 'Student' that inherits from 'Human'
class Student : public Human
{
                                           // Private members, only accessible within this class
    int roll_number;           // Member variable to store the roll number of the student
    int fees;                      // Member variable to store the fees of the student

public:
                                           // Constructor to initialize the Student object
    Student(string name, int age, int roll_number, int fees)
    {
                // 'this->' is used to refer to the current object's member variables
                // Assign the constructor parameter 'name' to the member variable 'name'
        
        this->name = name;
        this->age = age;                 
        this->roll_number = roll_number; 
        this->fees = fees;               
    }
};

                                         // The main function, entry point of the program
int main()
{
                                    // Create a 'Student' object named 'a1' and initialize it with values
    Student a1("aman", 20, 2, 200);

                                     // Call the 'work' function using the 'Student' object 'a1'
    a1.work();            // This will output "i am working\n" because 'Student' inherits from 'Human'

    return 0;  
}





//constructor of parent class will be called first then it will move on to the child class and this id just reverse in the destructor first it will call the child class and then it will move to the parent class 


#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;


Human(){
    cout<<"this is  a parent class\n";
}
public:
    void work()
    {
        cout << "i am working\n";
    }
};

class Student : public Human
{
    int roll_number, fees;

public:
    // Student(string name, int age, int roll_number, int fees)
    // {
        // this->name = name;
        // this->age = age;
        // this->roll_number = roll_number;
        // this->fees = fees;
    // }



    Student(){
        cout<<"this is a student class\n";
    }
};
int main()
{
    Student a1;
    a1.work();

}

 
// If a function is found in the child class, then it will not call the function from the parent class. Instead, it will use the version of the function that is defined in the child class. This concept is known as method overriding in object-oriented programming.//  
