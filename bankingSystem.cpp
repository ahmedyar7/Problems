#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class BankAccount
{
private:
    string name;
    int accountNumber;
    double balance;

public:
    // Constructor:
    BankAccount(string holder, int number, double mybalance)
    {
        name = holder;
        accountNumber = number;
        balance = mybalance;
    }
    // Member Function:
    void deposit(double amount)
    {
        balance += amount;
        cout << "The amount that is deposited is " << amount << endl;
        cout << "Now to total balace is " << balance << endl;
    }

    void withdrawal(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "The UPATED BALANCE IS: " << balance << endl;
        }
        else
        {
            cout << "NOT POSSILBE";
        }
    }

    void transferFunds(BankAccount &targetAccount, double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            targetAccount.deposit(amount);
            cout << "The funds transfer successfully\n";
        }
        else
        {
            cout << "NOT enough funds to transfer\n";
        }
    }
};

int main()
{
    BankAccount a1("Ahmed", 3234, 20);
    BankAccount account2("Bob", 67890, 500.00);
    a1.deposit(100);
    a1.withdrawal(20.00);
    account2.deposit(300.00);
    account2.withdrawal(100.00);
    a1.transferFunds(account2, 150.00);
}
