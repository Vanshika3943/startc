#include<iostream>
using namespace std;

class Parent{
    public:
    string name="shubhi";
    void print(){
        cout<<"helllo"<<endl;
    }
};

class Child:public Parent{
    public:
    int age=21;
} ;

int main(){
    Child c1;
    cout<<c1.name<<" "<<c1.age<<" "<<endl;
    c1.print();
}