#include<iostream>
using namespace std;
int max(int x,int y,int z){
    if(x>y&&x>z)
    return x;
    if(y>x&&y>z)
    return y;
    else 
    return z;
    
}

int main(){
    int a,b,c;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    cout<<"enter c"<<endl;
    cin>>c;
    cout<<"maximum number is "<<max(a,b,c)<<endl;
}