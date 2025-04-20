#include<iostream>
using namespace std;

class Parent{
    public:
    void myfunction(){   //function inside a class
        cout<<"hello"<<endl;
    }
    void outside();
    Parent(){
        cout<<"iam constructor"<<endl;
    }
};

void Parent:: outside(){
    cout<<"hey iam out"<<endl;
}

int main(){
    Parent a1;
    a1.myfunction();
    a1.outside();
}