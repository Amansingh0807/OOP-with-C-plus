
// QUESTION 5 :
// Write a C++ program to print the Fibonacci series up to n terms

#include <iostream>
using namespace std;

class Fibonacci {
public:
    // Member function to print Fibonacci series
    void printFibonacci(int n) {
        int a = 0, b = 1, c;

        // Printing the first two terms of the series
        cout << "Fibonacci Series: ";
        if (n >= 1) {
            cout << a << " ";
        }
        if (n >= 2) {
            cout << b << " ";
        }

        // Generating the Fibonacci series
        for (int i = 3; i <= n; i++) {
            c = a + b;  // Next term is the sum of the previous two terms
            cout << c << " ";
            a = b;  // Update a and b for the next iteration
            b = c;
        }
        cout << endl;
    }
};

int main() {
    int n;

    // Taking input from the user for the number of terms
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;

    // Creating an object of Fibonacci class
    Fibonacci fib;

    // Displaying the Fibonacci series
    fib.printFibonacci(n);

    return 0;
}

// SAMPLE OUTPUT :
// Enter the number of terms for Fibonacci series: 5
// Fibonacci Series: 0 1 1 2 3 