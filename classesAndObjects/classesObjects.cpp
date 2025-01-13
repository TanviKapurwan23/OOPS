#include <iostream>

// Define a class
class Car {
public:
    // Member variables
    std::string make;
    std::string model;

    // Member function
    void displayInfo() const {
        std::cout << "Make: " << make << ", Model: " << model << std::endl;
    }
};

int main() {
    // Create an object of the class
    Car myCar;
    myCar.make = "Toyota";
    myCar.model = "Corolla";

    // Call the member function
    myCar.displayInfo();

    return 0;
}
