//Abstraction is the concept of hiding the complex implementation details and showing only the essential features of the object.

#include <iostream>

class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Circle" << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Square" << std::endl;
    }
};

int main() {
    Shape* shape;

    Circle c;
    Square s;

    shape = &c;
    shape->draw(); // Drawing Circle

    shape = &s;
    shape->draw(); // Drawing Square

    return 0;
}

