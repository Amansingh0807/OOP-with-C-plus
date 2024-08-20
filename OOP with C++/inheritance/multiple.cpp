// C++ program to illustrate the multiple inheritance
#include <iostream>
using namespace std;

                               // first base class
class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

                                 // second base class
class FourWheeler {
public:
    FourWheeler() { cout << "This is a 4 Wheeler\n"; }
};

                             // sub class derived from two base classes
class Car : public Vehicle, public FourWheeler {
  public:
    Car() { cout << "This 4 Wheeler Vehical is a Car\n"; }
};


int main()
{
                            // Creating object of sub class will
                            // invoke the constructor of base classes.
    Car a1;
    
    return 0;
}
