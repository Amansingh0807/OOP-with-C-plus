
// QUETION NUMBER 1 : 

//  Develop a Program to enter traveling details and tell number of buses required using classes and objects.


#include <iostream>
using namespace std;

// Class to store travel details and calculate required buses
class Travel {
private:
    int passengers;                  // Number of passengers
    int bus_capacity;                // Capacity of a bus

public:
    // Constructor to initialize values
    Travel(int p, int c) {
        passengers = p;
        bus_capacity = c;
    }

    // Function to calculate the number of buses required
    int calculateBuses() {
        // If passengers is less than or equal to bus capacity, only one bus is required
        if (passengers <= bus_capacity) {
            return 1;
        } else {
            // Otherwise, calculate number of buses needed
            return (passengers + bus_capacity - 1) / bus_capacity;
        }
    }
};

int main() {
    int passengers, bus_capacity;

    // Taking input from the user
    cout << "Enter the number of passengers: ";
    cin >> passengers;
    cout << "Enter the capacity of a bus: ";
    cin >> bus_capacity;

    // Creating an object of the Travel class
    Travel travel(passengers, bus_capacity);

    // Calling the calculateBuses function to get the number of buses required
    int buses = travel.calculateBuses();

    // Display the result
    cout << "Number of buses required: " << buses << endl;

    return 0;
}



//SAMPLE OUTPUT
// Enter the number of passengers: 455
// Enter the capacity of a bus: 50
// Number of buses required: 10