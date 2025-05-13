#include<iostream>
using namespace std;
int main(){
    try{
        int *p = new int[100000000];
        throw "memeory allocation is sucessful";
        delete[]p;
    }
    catch(const exception &e){
        cout<<"exception occur :"<<e.what();
  
    }
}