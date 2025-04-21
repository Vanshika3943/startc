#include<iostream>    //function overloading
using namespace std;
class Area{
    public:
        int calArea(int r){
            return 3.14*r*r;
        }
        int calArea(int l,int b){
            return l*b;
        }
    
};

int main(){
    Area A1;
    cout<<A1.calArea(4)<<endl;
    cout<<A1.calArea(3,6)<<endl;
}