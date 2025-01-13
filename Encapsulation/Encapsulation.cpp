//Encapsulation is the bundling of data and methods that operate on the data into a single unit (class) and restricting access to some of the object's components.

#include <iostream>

class Account {
private:
    double balance; // Private data

public:
    // Public methods to access and modify balance
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    Account myAccount;
    myAccount.deposit(100);
    myAccount.withdraw(30);

    std::cout << "Account balance: $" << myAccount.getBalance() << std::endl;

    return 0;
}
