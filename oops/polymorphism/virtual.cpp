#include<iostream>
using namespace std;

class Base{
    public:
    int x;
    virtual void display(){             //if we add virtual key word then on run time the obj is bind with the class obj
        cout<<"Displaying base class"<<endl;

    }
};

class Derived:public Base{
    public:
    int y;
    void display(){
        cout<<"Displaying Derived class"<<endl;
    }
};

int main(){
    Base *base_pointer;
    Base obj_base;
    Derived obj_deri;
    base_pointer=&obj_deri;
    base_pointer->display();

    return 0;
}