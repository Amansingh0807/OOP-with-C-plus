// QUESTION 3:

//  Write a C++ program to add two numbers. The program should take two numbers as input from the user and display their sum.

#include <iostream>
using namespace std;

class Addition {
public:
    // Member function to add two numbers
    int addTwoNumbers(int a, int b) {
        return a + b;
    }
};

int main() {
    int num1, num2;

    // Taking input from the user
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Creating an object of Addition class
    Addition add;

    // Displaying the sum
    cout << "The sum of " << num1 << " and " << num2 << " is: " << add.addTwoNumbers(num1, num2) << endl;

    return 0;
}


// SAMPLE OUTPUT :
// Enter two numbers: 45 67
// The sum of 45 and 67 is: 112