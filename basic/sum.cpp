#include<iostream>
using namespace std;
int add(int a,int b){
    int result=a+b;
    return result;
}
int main(){
    int a,b;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    int sum=add(a,b);
    cout<<"addtion is "<<sum<<endl;
}