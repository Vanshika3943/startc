#include <iostream>
using namespace std;

class BankAccount
{
    string name;
    int age, account_no;
    float balance;

    static int total_customer;

public:
    void createAccount(string name, int age, int acc_no, float amount)
    {
        this->name = name;
        this->age = age;
        this->account_no = acc_no;
        if (amount > 0)
        {
            this->balance = amount;
        }
        else
        {
            cout << "unable to open account";
        }
        total_customer++;
    }

    void deposite(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "balance after depositing is: " << balance << endl;
        }
        else
        {
            cout << "invalid amount" << endl;
        }
    }

    void withdraw(float amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "balance after withdrawing is " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }

    static void customer()
    {
        cout << "total customer is " << total_customer;
    }
};

int BankAccount::total_customer = 0;

int main()
{
    BankAccount b1, b2, b3;
    b1.createAccount("avi", 21, 22334455, 10980.5);
    b2.createAccount("pihu", 18, 98765434, 20000);
    b3.createAccount("akrit", 20, 73024958, 30000);
    b1.deposite(500);
    b2.withdraw(1500);
    b3.withdraw(50000);
    BankAccount::customer();
}