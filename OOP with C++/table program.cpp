#include <iostream>
using namespace std;

int main() {

    // Declare an array of strings to hold the headers "name", "Roll No.", and "hobby"
    string user[] = {"name", "Roll No.", "hobby"};
    
    // Loop through the 'user' array to print each header followed by a tab space
    for (int i = 0; i < 3; i++) {
        cout << user[i] << "\t";  // Print the headers with a tab space
    }
    cout << "\n";  // Move to the next line after printing the headers

    // Declare a 2D array of strings with 5 rows and 3 columns to store student data
    string ar[5][3] = {
        "Aman Singh", "038", "to play chess",  // First row
        "Aman Singh", "038", "to play chess",  // Second row
        "Aman Singh", "038", "to play chess",  // Third row
        "Aman Singh", "038", "to play chess",  // Fourth row
        "Aman Singh", "038", "to play chess"   // Fifth row
    };

    // Loop through the rows of the 2D array 'ar'
    for(int j = 0; j < 5; j++) {
        // Loop through the columns of each row
        for (int k = 0; k < 3; k++) {
            cout << ar[j][k] << "\t";  // Print each element with a tab space
        }
        cout << "\n";  // Move to the next line after printing each row
    }
    
    system("pause");  // Pause the console (only works on Windows)
    return 0;  // Return 0 to indicate successful execution of the program
}



#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll;
    int marks[5];  // Array to store marks of 5 subjects

public:
    // Constructor to initialize the student's details
    Student(string n, int r, int m[]) {
        name = n;
        roll = r;
        for (int i = 0; i < 5; i++) {
            marks[i] = m[i];
        }
    }

    // Function to calculate the average marks
    float calculateAverage() {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        return sum / 5.0;
    }

    // Function to assign stream based on average marks
    string assignStream() {
        float averageMarks = calculateAverage();

        if (averageMarks >= 96) {
            return "Computer Science";
        } else if (averageMarks >= 91) {
            return "Electronics";
        } else if (averageMarks >= 86) {
            return "Mechanical";
        } else if (averageMarks >= 81) {
            return "Electrical";
        } else if (averageMarks >= 76) {
            return "Chemical";
        } else if (averageMarks >= 71) {
            return "Civil";
        } else {
            return "No Stream Available";
        }
    }

    // Function to display student's details and assigned stream
    void displayStudentDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Average Marks: " << calculateAverage() << "%" << endl;
        cout << "Assigned Stream: " << assignStream() << endl;
    }
};

int main() {
    int marks[] = {95, 98, 92, 96, 94};
    Student student("John Doe", 12345, marks);
    student.displayStudentDetails();
    return 0;
}
