#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying base class variable " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "displaying base class variable var_base " << var_base << endl;
        cout << "displaying derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    Base *base_pointer;
    Base obj_base;
    Derived obj_derived;
    base_pointer = &obj_derived; 
    // pointing base class pointer to derived class
    base_pointer->var_base = 122;
    base_pointer->display();     //output-displaying base class variable 122
    base_pointer->var_base = 3400;
    base_pointer->display();     // output- displaying base class variable 3400

    Derived *derived_pointer;
    derived_pointer = &obj_derived;
    derived_pointer->var_base = 3943;
    derived_pointer->var_derived = 98;
    derived_pointer->display();     /*dispalying base class variable var_base 3943
                                      displaying derived class variable var_derived 98*/

    return 0;
}