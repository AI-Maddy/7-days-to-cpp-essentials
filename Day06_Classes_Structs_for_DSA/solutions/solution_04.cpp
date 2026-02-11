#include <iostream>

using namespace std;

class BankAccount {
public:
    explicit BankAccount(double initial) : balance(initial) {}

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

private:
    double balance;
};

int main() {
    double initial = 0.0;
    double dep = 0.0;
    double w = 0.0;
    cin >> initial >> dep >> w;

    BankAccount account(initial);
    account.deposit(dep);
    account.withdraw(w);

    cout << account.getBalance() << "\n";
    return 0;
}
