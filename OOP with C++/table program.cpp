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
        {"Aman Singh", "038", "to play chess"},  // First row
        {"Aman Singh", "038", "to play chess"},  // Second row
        {"Aman Singh", "038", "to play chess"},  // Third row
        {"Aman Singh", "038", "to play chess"},  // Fourth row
        {"Aman Singh", "038", "to play chess"}   // Fifth row
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
