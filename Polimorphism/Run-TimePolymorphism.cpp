//Achieved through inheritance and virtual functions.



#include <iostream>

class Base {
public:
    virtual void display() const { // Virtual function
        std::cout << "Base class display" << std::endl;
    }
};

class Derived : public Base {
public:
    void display() const override { // Override the base class function
        std::cout << "Derived class display" << std::endl;
    }
};

int main() {
    Base* bptr;
    Derived d;
    bptr = &d;

    bptr->display(); // Calls Derived's display due to virtual function

    return 0;
}
