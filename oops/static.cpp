#include <iostream>
using namespace std;

class Customer
{
    // attribute of class or class member
    static int customer_count;
    string name;
    int age;
    int accNo;

public:
    Customer(string n, int age, int accNo)
    {
        this->name = n;
        this->age = age;
        this->accNo = accNo;
        customer_count++;
    }
    void display()
    {
        cout << name << " " << age << " " << accNo << " " << endl;
    }
    void totalCustomer()
    {
        cout << customer_count << endl;
    }
    static void accesStatic()
    {
        cout << customer_count << endl;
    }
};
// for initializing static variable
int Customer::customer_count = 0;

int main()
{
    Customer a1("pihu", 12, 12345678);
    Customer a2("avi", 21, 98765432);
    a1.display();
    a2.display();
    a1.totalCustomer();
    Customer::accesStatic();
}