// this program is executed by the help of a function here we created a global variable and getting the output 


#include <iostream>
using namespace std;
int sum(int x, int y)
 { return (x + y); }

int main(){
    int x;
    cout<<"Enter first number: ";
    cin>>x;
    int y;
     cout<<"Enter second  number: ";
    cin>>y;
  

cout<<sum( x,  y);
return 0;
}


// now with the help of class and object concept

#include <iostream>
using namespace std;

// Class definition
class Addition {
    public:
        int num1, num2;

        // Function to set the numbers
        void setNumbers(int a, int b) {
            num1 = a;
            num2 = b;
        }

        // Function to return the sum of the numbers
        int getSum() {
            return num1 + num2;
        }
};

int main() {
    // Creating an object of the Addition class
    Addition add;

    // Setting the numbers
    add.setNumbers(10, 20);

    // Getting and displaying the sum
    int sum = add.getSum();           //int sum = add.getSum(); This calls the getSum function, which calculates the sum of num1 and num2, and stores it in the variable sum.
    cout << "The sum is: " << sum << endl;

    return 0;
}


// IF TOU WISH TO TAKE INPUT FROM USER U CAN DO IN THIS BELOW WAY

#include <iostream>
using namespace std;

// Class definition
class Addition {
    public:
        int num1, num2;

        // Function to set the numbers
        void setNumbers(int a, int b) {
            num1 = a;
            num2 = b;
        }

        // Function to return the sum of the numbers
        int getSum() {
            return num1 + num2;
        }
};

int main() {
    // Creating an object of the Addition class
    Addition add;

    int a, b;

    // Taking input from the user
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    // Setting the numbers
    add.setNumbers(a, b);

    // Getting and displaying the sum
    int sum = add.getSum();
    cout << "The sum is: " << sum << endl;

    return 0;
}

