
// QUESTION 4:

// Write a C++ program to add N numbers. The program should prompt the user to input the value of N, then take N numbers as input and display their sum.

#include <iostream>
using namespace std;

class Sum {
public:
    // Member function to add N numbers
    int addNNumbers(int n) {
        int sum = 0, number;
        for (int i = 1; i <= n; i++) {
            cout << "Enter number " << i << ": ";
            cin >> number;
            sum += number;
        }
        return sum;
    }
};

int main() {
    int n;

    // Taking the number of elements (N) as input
    cout << "Enter the number of elements to sum: ";
    cin >> n;

    // Creating an object of Sum class
    Sum s;

    // Displaying the sum of N numbers
    cout << "The sum of the entered numbers is: " << s.addNNumbers(n) << endl;

    return 0;
}



// SAMPLE OUTPUT :
// Enter the number of elements to sum: 4 
// Enter number 1: 12
// Enter number 2: 34
// Enter number 3: 23
// Enter number 4: 54
// The sum of the entered numbers is: 123