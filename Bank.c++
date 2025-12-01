#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accNumber;
    double balance;

public:
    BankAccount(string n, int a, double b) {
        name = n;
        accNumber = a;
        balance = b;
    }

    void deposit(double amt) {
        balance += amt;
    }

    void withdraw(double amt) {
        if (amt <= balance) balance -= amt;
        else cout << "Insufficient balance\n";
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount obj("Hari", 101, 5000);

    obj.deposit(1000);
    obj.withdraw(2000);
    obj.display();

    return 0;
}
