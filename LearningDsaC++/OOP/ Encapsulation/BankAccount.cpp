#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // Encapsulated data

public:
    BankAccount() : balance(0) {} // Constructor

    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) balance -= amount;
        else cout << "Insufficient balance!\n";
    }

    double getBalance() const { // Public method to access private data
        return balance;
    }
};

int main() {
    BankAccount account;
    account.deposit(1000);
    account.withdraw(500);
    cout << "Current balance: $" << account.getBalance() << endl;

    return 0;
}
