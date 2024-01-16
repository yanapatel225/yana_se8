#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    
    void setAccountDetails(string name, int accNumber, string accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited successfully. Updated balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully. Updated balance: " << balance << endl;
        } else {
            cout << "Insufficient funds. Withdrawal not possible." << endl;
        }
    }

    void displayAccountInfo() {
        cout << "Account Information:" << endl;
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount myAccount;

    myAccount.setAccountDetails("John doe", 123456, "Savings", 1000.00);

    myAccount.displayAccountInfo();
    myAccount.deposit(500.00);
    myAccount.withdraw(200.00);
    myAccount.withdraw(1500.00);  

    myAccount.displayAccountInfo();

    return 0;
}

