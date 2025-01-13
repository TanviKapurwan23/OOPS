// A class derives from multiple base classes.

#include <iostream>

// Base class 1
class Flyer {
public:
    void fly() const {
        std::cout << "Flying" << std::endl;
    }
};

// Base class 2
class Swimmer {
public:
    void swim() const {
        std::cout << "Swimming" << std::endl;
    }
};

// Derived class
class Duck : public Flyer, public Swimmer {
public:
    void quack() const {
        std::cout << "Duck is quacking" << std::endl;
    }
};

int main() {
    Duck myDuck;
    myDuck.fly();  // Method from Flyer
    myDuck.swim(); // Method from Swimmer
    myDuck.quack(); // Method from Duck

    return 0;
}
