//Members are accessible from outside the class.

#include <iostream>

class MyClass {
public:
    int value; // Public member

    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.value = 10; // Accessing public member
    obj.display();

    return 0;
}
