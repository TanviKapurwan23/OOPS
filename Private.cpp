//Members are accessible only within the class.

#include <iostream>

class MyClass {
private:
    int value; // Private member

public:
    void setValue(int v) {
        value = v;
    }

    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.setValue(10); // Accessing private member through a public method
    obj.display();

    return 0;
}
