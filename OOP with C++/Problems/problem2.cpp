
// QUESTION 2:
// Write a C++ program that calculates the factorial of a given number using Object-Oriented Programming (OOP) concepts. You should implement a class Factorial that contains:


#include <iostream>
using namespace std;

class Factorial {
private:
    int num;

public:
    // Constructor to initialize the number
    Factorial(int n) {
        num = n;
    }

    // Member function to calculate factorial
    long long calculateFactorial() {
        long long result = 1;
        for (int i = 1; i <= num; i++) {
            result *= i;
        }
        return result;
    }

    // Member function to display the result
    void displayFactorial() {
        cout << "Factorial of " << num << " is: " << calculateFactorial() << endl;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Creating an object of Factorial class
    Factorial f(n);

    // Displaying the factorial
    f.displayFactorial();

    return 0;
}



// SAMPLE OUTPUT :
// Enter a number: 23
// Factorial of 23 is: 8128291617894825984