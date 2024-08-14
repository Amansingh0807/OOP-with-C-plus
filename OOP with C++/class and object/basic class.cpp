#include <iostream>
using namespace std;

class Student{  // here created a class named as Student and  A class is like a blueprint for creating objects that represent students.
    public:      //This access specifier makes the members of the class accessible from 
                                        //    outside the class.
    string name;
    int roll_no;
    string grade;    //data members (or attributes) of the class Student basically here defined a class 

};
int main(){
    Student s1;    //Student s1; This creates an object s1 of the Student class.
    s1.name="aman singh";
    s1.roll_no=123;
    s1.grade="a+";
    cout<<s1.name<<endl;   //cout << s1.name << endl;: This prints the name of s1 to the console, followed by a newline (endl).

      Student s2;
    s2.name="aman singh";
    s2.roll_no=123;
    s2.grade="a+";

      Student s3;
    s3.name="aman singh";
    s3.roll_no=123;
    s3.grade="a+";

    cout<<s2.grade<<endl;  
    cout<<s1.roll_no<<endl;    
}


// WHY WE ACTUALLY NEED CONCEPT OF CLASS INSTED OF THE FUNCTION CONCEPT THAT WE HAVE 
// HERE ARE SOME REASONS 

// With Functions: You can write functions that operate on data, but the data and the functions are usually separate. Managing and passing data between functions can get complex, especially as your codebase grows.
// With Classes: A class bundles data (attributes) and the functions (methods) that operate on that data together. This encapsulation makes it easier to manage and maintain code, as related data and functions are kept together.

// Reusability
// With Functions: You can reuse functions, but the reusability is limited to the specific task that the function performs.
// With Classes: Classes are reusable components that can be instantiated multiple times with different data. You can create multiple objects from a class, each with its own state but sharing the same behavior