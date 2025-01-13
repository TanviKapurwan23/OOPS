// Single Inheritance
// A class derives from a single base class.

#include <iostream>

// Base class
class Animal {
public:
    void eat() const {
        std::cout << "Animal is eating" << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() const {
        std::cout << "Dog is barking" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Inherited method
    myDog.bark(); // Derived method

    return 0;
}
