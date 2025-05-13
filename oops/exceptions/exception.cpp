#include <iostream>
using namespace std;

class BankAccount
{
    string name;
    int account_no, balance;

public:
    void createaccount(string name, int acc_no, int balance)
    {
        this->name = name;
        this->account_no = acc_no;
        this->balance = balance;
    }

    void deposit(int amount)
    {
        if (amount <= 0)
        {
            throw "invalid deposit";
        }

        balance += amount;
        cout << "Balance after deposit is : " << balance << endl;
    }

    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "balance after withdraw is : " << balance << endl;
        }
        else
        {
            throw "insufficient balance";
        }
    }
};

int main()
{
    BankAccount b1;
    try
    {
        b1.createaccount("avi", 12345678, 2000);
        b1.deposit(1000);
        b1.withdraw(5000);
        // exception has occured in the above statemanet hence the code will not execute after this
        b1.deposit(200);
    }
    catch (const char *e)
    {
        cout << "exception occured: " << e << endl;
    }
}