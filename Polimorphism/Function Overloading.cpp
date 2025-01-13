#include <iostream>

// Function overloading
class Print {
public:
    void show(int i) {
        std::cout << "Integer: " << i << std::endl;
    }

    void show(double d) {
        std::cout << "Double: " << d << std::endl;
    }

    void show(const std::string& s) {
        std::cout << "String: " << s << std::endl;
    }
};

int main() {
    Print p;
    p.show(5);            // Calls show(int)
    p.show(3.14);         // Calls show(double)
    p.show("Hello");     // Calls show(string)

    return 0;
}
