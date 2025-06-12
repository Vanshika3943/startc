#include <iostream>
using namespace std;

class Student
{
    string name;
    int marks1, marks2, marks3;

public:
    Student(string n, int m1, int m2, int m3)
    {
        this->name = n;
        this->marks1 = m1;
        this->marks2 = m2;
        this->marks3 = m3;
    }
    void calTotal()
    {
        cout << "total marks of " << name << " is " << marks1 + marks2 + marks3 << endl;
    }

    void calAvg()
    {
        cout << "Avg marks of " << name << " is " << (marks1 + marks2 + marks3) / 3 << endl;
    }
};

int main()
{
    Student s1("avi", 96, 56, 78);
    Student s2("pihu", 98, 87, 76);
    s1.calTotal();
    s2.calTotal();
    s1.calAvg();
    s2.calAvg();
}