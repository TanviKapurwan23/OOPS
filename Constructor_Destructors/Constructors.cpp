// Constructors are special member functions that are called when an object is instantiated. They initialize the object.

#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }
};

int main() {
    MyClass obj; // Constructor is called here

    return 0;
}
