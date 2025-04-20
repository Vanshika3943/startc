#include<iostream>
using namespace std;
int setKthBit(int n,int k){
    int mask=1<<k;
    int bit=n|mask;
    return bit;
}
int main(){
    int n,k;
    cout<<"enter the no."<<endl;
    cin>>n;
    cout<<"enter the Kth bit"<<endl;
    cin>>k;
    cout<<"ater seting " <<setKthBit(n,k);
}