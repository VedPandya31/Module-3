#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    
    BankAccount() {
        balance = 0;
    }

   
    void deposit(double amount) {
        balance = balance + amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void showBalance() {
        cout << "Current Balance = " << balance << endl;
    }
};

int main() {
    BankAccount account;  

    account.deposit(1000);
    account.withdraw(500);
    account.showBalance(); 

    return 0;
}
