//Members are accessible within the class and by derived classes.

#include <iostream>

class Base {
protected:
    int value; // Protected member
};

class Derived : public Base {
public:
    void setValue(int v) {
        value = v; // Accessing protected member
    }

    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    Derived obj;
    obj.setValue(10);
    obj.display();

    return 0;
}


// Classes and Objects: Define and create objects that encapsulate data and functions.
// Inheritance: Allows a class to inherit properties and behaviors from another class (single and multiple inheritance).
// Polymorphism: Enables methods to do different things based on the object type (compile-time and run-time).
// Encapsulation: Bundles data and methods into a single unit and restricts access to some components.
// Abstraction: Hides complex implementation details and shows only essential features.
// Constructors and Destructors: Special methods for initializing and cleaning up objects.
// Access Specifiers: Control the visibility of class members (public, private, protected).