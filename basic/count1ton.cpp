#include<iostream>
using namespace std;
void count(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}
int main(){
    int n;
    cout<<"enter no."<<endl;
    cin>>n;
    count(n);
}