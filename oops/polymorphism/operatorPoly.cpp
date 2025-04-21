#include<iostream>
using namespace std;
class Complex{
    int real, img;
    public:
    Complex(int real,int img){
        this->real=real;
        this->img=img;
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }

    Complex operator+(Complex &C){
        return Complex(real+C.real,img+C.img);
    }


};

int main(){
    Complex C1(3,4);
    Complex C2(2,3);
    Complex C3= C1+C2;
    C3.display();
}