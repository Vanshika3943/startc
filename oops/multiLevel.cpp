#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    void print(){
        cout<<"hello iam base class"<<endl;
    }
};
class Employee:public Person{
    public:
    float salary;
    Employee(string name,int age,float salary):Person(name,age){
        this->salary=salary;
    }
};
class Manager:public Employee{
    public:
    string dep;
    Manager(string name,int age,float salary,string dep):Employee(name,age,salary){
       
        // this->salary=salary;
        this->dep=dep;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<salary<<" "<<dep<<" "<<endl;
    }
};

int main(){
    Manager m1("shubhi",21,200,"cse");
    m1.print();
    m1.display();
}