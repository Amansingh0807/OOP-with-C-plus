//here is an exapmle of hybrid inheritance in which {Student -> Sports, Student -> Exam -> Result}


// Hybrid Inheritance is a combination of two or more types of inheritance in C++ (such as single, multiple, multilevel, or hierarchical).

// It is used to create complex class structures by mixing different inheritance types.
// Virtual inheritance is often used to avoid ambiguity and duplicate base class copies.

#include <iostream>
using namespace std;

// Base class
class Student {
    protected:
    int rollNo;

    public:
    void setRollNo(int r) {
        rollNo = r;
    }

    void showRollNo() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

// First Derived Class from Student (for sports activities)
class Sports : virtual public Student {
    protected:
    int sportsMarks;

    public:
    void setSportsMarks(int sm) {
        sportsMarks = sm;
    }

    void showSportsMarks() {
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

// Second Derived Class from Student (for exam performance)
class Exam : virtual public Student {
    protected:
    int examMarks;

    public:
    void setExamMarks(int em) {
        examMarks = em;
    }

    void showExamMarks() {
        cout << "Exam Marks: " << examMarks << endl;
    }
};

// Derived class from Sports and Exam
class Result : public Sports, public Exam {
    public:
    void showResult() {
        showRollNo();  // From Student
        showSportsMarks();  // From Sports
        showExamMarks();  // From Exam
        cout << "Total Marks: " << sportsMarks + examMarks << endl;
    }
};

int main() {
    Result student1;

    student1.setRollNo(101);       // From Student class
    student1.setSportsMarks(45);   // From Sports class
    student1.setExamMarks(85);     // From Exam class
    student1.showResult();         // Display all information

    return 0;
}



// we have it's output too 
// Roll Number: 101
// Sports Marks: 45
// Exam Marks: 85
// Total Marks: 130

