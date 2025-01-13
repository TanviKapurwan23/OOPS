// Destructors are special member functions that are called when an object is destroyed. They are used to release resources.

#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    MyClass obj; // Constructor is called here

    return 0;    // Destructor is called here

    return 0;
}
